/**
 * Italian
 *
 * LCD Menu Messages
 * Please note these are limited to 17 characters!
 *
 */
#ifndef LANGUAGE_IT_H
#define LANGUAGE_IT_H

#define WELCOME_MSG                         MACHINE_NAME " pronta."
#define MSG_SD_INSERTED                     "SD Card inserita"
#define MSG_SD_REMOVED                      "SD Card rimossa"
#define MSG_MAIN                            "Menu principale"
#define MSG_AUTOSTART                       "Autostart"
#define MSG_DISABLE_STEPPERS                "Disabilita Motori"
#define MSG_AUTO_HOME                       "Auto Home"
#define MSG_BED_SETTING                     "Bed Setting"
#define MSG_SET_HOME_OFFSETS                "Setta offset home"
#define MSG_SET_ORIGIN                      "Imposta Origine"
#define MSG_PREHEAT_PLA                     "Preriscalda PLA"
#define MSG_PREHEAT_PLA_ALL                 "Prer. PLA Tutto"
#define MSG_PREHEAT_PLA_BEDONLY             "Prer. PLA Piatto"
#define MSG_PREHEAT_PLA_SETTINGS            "Config. prer. PLA"
#define MSG_PREHEAT_ABS                     "Preriscalda ABS"
#define MSG_PREHEAT_ABS_ALL                 "Prer. ABS Tutto"
#define MSG_PREHEAT_ABS_BEDONLY             "Prer. ABS Piatto"
#define MSG_PREHEAT_ABS_SETTINGS            "Config. prer. ABS"
#define MSG_PREHEAT_GUM                     "Preriscalda GOMMA"
#define MSG_PREHEAT_GUM_ALL                 "Preri. GOMMA Tutto"
#define MSG_PREHEAT_GUM_BEDONLY             "Preri. GOMMA Piatto"
#define MSG_PREHEAT_GUM_SETTINGS            "Preris. GOMMA Conf"
#define MSG_COOLDOWN                        "Raffredda"
#define MSG_SWITCH_PS_ON                    "Accendi aliment."
#define MSG_SWITCH_PS_OFF                   "Spegni aliment."
#define MSG_EXTRUDE                         "Estrudi"
#define MSG_RETRACT                         "Ritrai"
#define MSG_MOVE_AXIS                       "Muovi Asse"
#define MSG_MOVE_X                          "Muovi X"
#define MSG_MOVE_Y                          "Muovi Y"
#define MSG_MOVE_Z                          "Muovi Z"
#define MSG_MOVE_E                          "Estrusore"
#define MSG_MOVE_01MM                       "Muovi di 0.1mm"
#define MSG_MOVE_1MM                        "Muovi di   1mm"
#define MSG_MOVE_10MM                       "Muovi di  10mm"
#define MSG_SPEED                           "Velcità"
#define MSG_NOZZLE                          "Ugello"
#define MSG_BED                             "Piatto"
#define MSG_FAN_SPEED                       "Ventola"
#define MSG_FLOW                            "Flusso"
#define MSG_CONTROL                         "Controllo"
#define MSG_MIN                             " " STR_THERMOMETER " Min"
#define MSG_MAX                             " " STR_THERMOMETER " Max"
#define MSG_FACTOR                          " " STR_THERMOMETER " Fact"
#define MSG_AUTOTEMP                        "Autotemp"
#define MSG_ON                              "On "
#define MSG_OFF                             "Off"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_ACC                             "Accel."
#define MSG_VXY_JERK                        "Vxy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VMAX                            "Vmax "
#define MSG_X                               "x"
#define MSG_Y                               "y"
#define MSG_Z                               "z"
#define MSG_E                               "e"
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VTrav min"
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-retract"
#define MSG_XSTEPS                          "X steps/mm"
#define MSG_YSTEPS                          "Y steps/mm"
#define MSG_ZSTEPS                          "Z steps/mm"
#define MSG_E0STEPS                         "E0 steps/mm"
#define MSG_E1STEPS                         "E1 steps/mm"
#define MSG_E2STEPS                         "E2 steps/mm"
#define MSG_E3STEPS                         "E3 steps/mm"
#define MSG_TEMPERATURE                     "Temperatura"
#define MSG_MOTION                          "Movimento"
#define MSG_VOLUMETRIC                      "Filamento"
#define MSG_VOLUMETRIC_ENABLED		          "E in mm" STR_h3
#define MSG_FILAMENT_SIZE_EXTRUDER          "Diam. filo"
#define MSG_CONTRAST                        "Contrasto LCD"
#define MSG_STORE_EPROM                     "Salva in EEPROM"
#define MSG_LOAD_EPROM                      "Carica da EEPROM"
#define MSG_RESTORE_FAILSAFE                "Impostaz. default"
#define MSG_REFRESH                         "Aggiorna"
#define MSG_WATCH                           "Guarda"
#define MSG_PREPARE                         "Prepara"
#define MSG_TUNE                            "Adatta"
#define MSG_PAUSE_PRINT                     "Pausa"
#define MSG_RESUME_PRINT                    "Riprendi Stampa"
#define MSG_STOP_PRINT                      "Arresta Stampa"
#define MSG_CARD_MENU                       "SD Card Menu"
#define MSG_NO_CARD                         "No SD Card"
#define MSG_DWELL                           "Sospensione..."
#define MSG_USERWAIT                        "Attendi Utente..."
#define MSG_RESUMING                        "Riprendi Stampa"
#define MSG_PRINT_ABORTED                   "Stampa abortita"
#define MSG_NO_MOVE                         "Nessun Movimento"
#define MSG_KILLED                          "UCCISO "
#define MSG_STOPPED                         "ARRESTATO "
#define MSG_CONTROL_RETRACT                 "Ritrai mm"
#define MSG_CONTROL_RETRACT_SWAP            "Scamb. Ritrai mm"
#define MSG_CONTROL_RETRACTF                "Ritrai  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Salta mm"
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet +mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Scamb. UnRet +mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#define MSG_AUTORETRACT                     "AutoArretramento"
#define MSG_FILAMENTCHANGE                  "Cambia filamento"
#define MSG_INIT_SDCARD                     "Iniz. SD-Card"
#define MSG_CNG_SDCARD                      "Cambia SD-Card"
#define MSG_ZPROBE_OUT                      "Z probe out. bed"
#define MSG_POSITION_UNKNOWN                "Home X/Y before Z"
#define MSG_ZPROBE_ZOFFSET                  "Z Offset"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Finecorsa abort"

#ifdef DELTA
  #define MSG_DELTA_CALIBRATE               "Calibraz. Delta"
  #define MSG_DELTA_CALIBRATE_X             "Calibra X"
  #define MSG_DELTA_CALIBRATE_Y             "Calibra Y"
  #define MSG_DELTA_CALIBRATE_Z             "Calibra Z"
  #define MSG_DELTA_CALIBRATE_CENTER        "Calibra Centro"
#endif // DELTA

#define MSG_LASER                           "Laser Preset"
#define MSG_CONFIG                          "Configurazione"
#define MSG_BAUDRATE                        "Baudrate"
#define MSG_E_BOWDEN_LENGTH                 "Extrude " STRINGIFY(BOWDEN_LENGTH) "mm"
#define MSG_R_BOWDEN_LENGTH                 "Retract " STRINGIFY(BOWDEN_LENGTH) "mm"
#define MSG_PURGE_XMM                       "Purge " STRINGIFY(LCD_PURGE_LENGTH) "mm"
#define MSG_RETRACT_XMM                     "Retract " STRINGIFY(LCD_RETRACT_LENGTH) "mm"

#ifdef FIRMWARE_TEST
  #define MSG_FWTEST_YES                    "Dai il comando Y per andare avanti"
  #define MSG_FWTEST_NO                     "Dai il comando N per andare avanti"
  #define MSG_FWTEST_YES_NO                 "Dai il comando Y o N per andare avanti"
  #define MSG_FWTEST_ENDSTOP_ERR            "ENDSTOP ERROR! Controllare cavi e connessioni"
  #define MSG_FWTEST_PRESS                  "Premere e tenere premuto l'endstop "
  #define MSG_FWTEST_INVERT                 "Invertire valore in "
  #define MSG_FWTEST_XAXIS                  "Il nozzle si e' spostato a destra?"
  #define MSG_FWTEST_YAXIS                  "Il nozzle si e' spostato in avanti?"
  #define MSG_FWTEST_ZAXIS                  "Il nozzle si e' spostato in alto?"
  #define MSG_FWTEST_01                     "Muovi manualmente gli assi X, Y e Z lontano dagli endstop"
  #define MSG_FWTEST_02                     "Vuoi controllare gli ENDSTOP?"
  #define MSG_FWTEST_03                     "Inizio controllo ENDSTOP"
  #define MSG_FWTEST_04                     "Inizio controllo MOTORI"
  #define MSG_FWTEST_ATTENTION              "ATTENZIONE! Controlla che i tre assi siano a piu' di 5 mm dagli endstop!"
#endif // FIRMWARE_TEST

#endif // LANGUAGE_IT_H
