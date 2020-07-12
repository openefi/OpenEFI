/** @file */
// Acá todos los defines
#ifndef DEFINES_H
#define DEFINES_H

// Version de firmware
#define OPENEFI_VER_MAJOR 2
#define OPENEFI_VER_MINOR 0
#define OPENEFI_VER_REV 3

/*-----( Globales )-----*/

#define mtr 1           //!< habilita encendido
#define CIL 4           //!< cantidad de cilindros o pistones, o camaras de combustion, etc ?)
#define L_CIL (CIL - 1) //!< cilindros logicos, para manejar arrays y demases
#define DNT 300         //!< cantidad de dientes del sensor CKP
#define Alpha 1         //!< modo para probar sin correcciones de tiempo, ni algoritmos de inyeccion ni sincronizacion, para encajar un 555 y probar a pelo ?)

/*-----( RPM )-----*/

#define RPM_per 500 //periodo en ms en el que se actualizan las rpm ( si lo cambias , o arreglas el calculo para las rpm,o se rompe todo maquinola)

/*-----( C_PWM )-----*/

#define CPWM_ENABLE             //!< Habilita el control de PWM
#define PMSI 240                //!< Cantidad de dientes entre PMS

#define C_PWM_INY_PORT GPIOB                        //!<    puerto de los pines de inyeccion 2 3 4 5  2 4 5 3
#define C_PWM_INY { GPIO6, GPIO4, GPIO5, GPIO3 }    //!<    pines del STM32 para la inyeccion
#define C_PWM_ECN_PORT GPIOB                        //!<    puerto de los pines de encendido
#define C_PWM_ECN { GPIO8, GPIO7 }                  //!<    pines del STM32 para el encendido

// Inyeción:
#define AVCI 30 //avance de inyeccion (si queres quemar las valvulas dejalo en 0)

// Encendido:
#define ECNT 7 //tiempo en ms que se prende la bobina (cambie a su riesgo)

/*-----( I_IALG )-----*/
//cuando tenga la libreria de memoria paso todo a variable, por ahora con define
//int INY_L = 150,   //tiempo de apertura del inyector en microsegundos
//INY_P = 500,   //tiempo en uS adicional para acelerar el motor
//INY_C = 25000; //Es el valor constante , que determina el tiempo de apertura para que se crea la mezcla estequiom�trica (lambda=1 ) , para cilindrada del motor , presi�n a 100kPa , temperatura del aire a 21�C y VE 100% .

#define INY_C 8000
#define INY_P 500
#define INY_L 150
#define ARRTp 45   //temperatura para definir si es arranque en frio o en caliente
#define TARR 3500  //tiempo de inyeccion para arranque (frio)
#define TARR2 2500 //tiempo de inyeccion para arranque (caliente)
/*-----( Variables _LMB )-----*/

#define LMBM false //en true si se utilizan las dos sondas lambda
#define CTA 250    //Correcion de tiempo A, mezcla rica, se le sacan X uS
#define CTB 300    //Correcion de tiempo B, mezcla pobre, se le agregan X uS
#define P_LMB 250  //periodo en mS en el que se corrije por sonda lamba
#define T_LMB 45   //temperatura a partir de la cual se intenta correjir el tiempo de inyeccion
#define FLMBA 1.5  //factor maximo de lambda
#define FLMBB 0.85 //factor minimo de lambda

/*-----( Variables BPW )-----*/

#define BPC 1500 //Base Pulse Constant
#define AF 123   // relacion aire combustible, se divide por 10 para no usar float
#define BVC 1    //correcion por bateria, luego intentar usar tabla
#define BLM 168  // "Block Learn" varia entre 168 y 170 dependiendo de como resultaron los tiempos
//anteriores, seudo IA para mejorar el tiempo de inyeccion
#define DFCO 1 //ni puta idea
#define DE 1   // ni puta idea x2
#define TBM 1  //turbo boost multiplier DEJAR EN 1 CARAJO, que sino rompes todo

/*-----( Sensors )-----*/

//  ADC:
// R2 = R1 * (1 / ((Vref / Vin) - 1)
#define R1 10000            //!< para testear ahora todos los sensores tienen una resitencia de 10k en el divisor resistivo
#define Vref 3300           //!< Volts del Vref del ADC, luego se puede reemplazar por el registro para que sea mas exacto
#define ADC_MAX_VALUE 4095  //!< valor maximo del ADC, a 12 bit es 4095

//  TPS:
#define TPS_DUAL false       //!< Habilita el TPS doble, requiere remapeo de IO

#define TPS_MIN_A 1700       //!< Valor minimo en mV para el sensor TPS (primer potenciometro); valores inferiores disparan DTC
#define TPS_MIN_B 1700       //!< Valor minimo en mV para el sensor TPS (segundo potenciometro); valores inferiores disparan DTC
#define TPS_MAX_A 4500       //!< Valor maximo en mV para el sensor TPS (primer potenciometro); valores superiores disparan DTC
#define TPS_MAX_B 4500       //!< Valor maximo en mv para el sensor TPS (segundo potenciometro); valores superiores disparan DTC

// qfp_fadd: suma | qfp_fdiv: division | qfp_fmul: multiplicacion | qfp_fln: logaritmo natural | qfp_fsub: resta
#define TPS_CALC_FAST( mV ) ( (mV <= 3695) ? qfp_fdiv( qfp_fsub(mV, 1823), 37.44 ) :  qfp_fdiv( qfp_fsub(mV, 2943), 15.04 )  )
#define TPS_CALC_A( mV )  ( (mV <= 3695) ?  (mV - 1823) / 37.44 :  (mV - 2943) / 15.04 ) //!< Ecuacion para transformar valor en mV a porcentaje (varia dependiendo del sensor); NO MANDES UN MAP() DE ARDUINO ACA

//  Sensor NTC
float A = 1.12492089e-3;
float B = 2.372075385e-4;
float C = 6.954079529e-8;
//float C = 2.019202697e-07; // Modelo B de NTC
float K = 2.5; //factor de disipacion en mW/C

#endif