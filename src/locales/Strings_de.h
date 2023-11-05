// -----------------------------------------------------------------------------------
// Locale English (default,) ISO ISO639-1 language code "en"
#pragma once

// Fonts, see https://github.com/olikraus/u8g2/wiki/fntlistall for the complete list
#define LF_CATALOGS u8g2_font_6x13_tf       //  9 pixel height
#define LF_GREEK u8g2_font_unifont_t_greek  // 10 pixel height
#define LF_STANDARD u8g2_font_helvR10_tf    // 11 pixel height
#define LF_LARGE u8g2_font_helvR12_tf       // 12 pixel height

// General
#define L_OK "OK"
#define L_ON "An"
#define L_OFF "Aus"
#define L_YES "Ja"
#define L_NO "Nein"
#define L_NOW "Jetzt"
#define L_SETV "Setze"
#define L_ALL "Alle"
#define L_SET_STATE "Setze Status"
#define L_VALUE "Wert"
#define L_WITHIN "innerhalb von"
#define L_DISABLE "deaktiviert"
#define L_CANCELED "abgebrochen"
#define L_FAILED "fehlgeschlagen"
#define L_DEGREE "Grad"
#define L_ARCSEC "Bogensek."
#define L_MICRON_PER_C "um/C"
#define L_DAYS "Tage"

// common abbreviations
#define L_TELESCOPE "Teleskop" // telescope
#define L_SEC_ABV "Sek"     // seconds
#define L_MIN_ABV "Min"     // minutes
#define L_HRS_ABV "Std"     // hours
#define L_OFFSET_ABV "Ofs"  // offset
#define L_TZ_ABV "Zeitzone"     // time-zone
#define L_RA "RA"           // Right Ascension
#define L_DE "De"           // Declination
#define L_DEC "Dec"
#define L_AZ "Az"           // Azimuth
#define L_ALT "Alt"         // Altitude

// --------------------- menu, alignment -------------------

#define L_ALGN_RESUME "Ausr. Fortsetzen"
#define L_ALGN_SHOW_CORR "Zeige Korrektur"
#define L_ALGN_CLEAR_CORR "Loesche Korrektur"
#define L_ALGN_RESET_HOME "Reset Homepos."
#define L_ALIGNMENT "Polausrichtung"
#define L_ALGN_STAR_ALIGN "Sternausrichtung"
#define L_ALGN_SHOW_MODEL "Zeige Modell"
#define L_ALGN_CLEAR_MODEL "Loesche Modell"
#define L_ALGN_RESET_HOME "Reset Home"


#define L_ALGN_RESUME0 "Reset"
#define L_ALGN_RESUME1 "Fahre zu Homepos."
#define L_ALGN_RESUME2 "Datum/Zeit"
#define L_ALGN_RESUME3 "Nicht gesetzt!"
#define L_ALGN_RESUME4 "Nachf.-Geschwind."
#define L_ALGN_RESUME5 "48X gesetzt"

#define L_ALGN_REFINE_MSG1 "Setup & 3+ Sterne"
#define L_ALGN_REFINE_MSG2 "Polausrichtung"
#define L_ALGN_REFINE_MSG3 "Gehe zu hellem Stern "
#define L_ALGN_REFINE_MSG4 "nahe NCP/SCP w/"
#define L_ALGN_REFINE_MSG5 "DE zw. 50 to 80"
#define L_ALGN_REFINE_MSG6 "Grad N/S."
#define L_ALGN_REFINE_MSG7 "Antw. mit JA."
#define L_ALGN_REFINE_MSG8 "Benutze Richtungs-"
#define L_ALGN_REFINE_MSG9 "Tasten um Stern"
#define L_ALGN_REFINE_MSG10 "zu zentrieren."
#define L_ALGN_REFINE_MSG11 "Alternativ Montier-"
#define L_ALGN_REFINE_MSG12 "ung neu ausrichten"
#define L_ALGN_REFINE_MSG13 "Verfeinern PA?"
#define L_ALGN_REFINE_MSG14 "Stern erneut "
#define L_ALGN_REFINE_MSG15 "zentrieren"

// ----------------------- menu, main ----------------------

// feature key menu
#define L_FKEY_GUIDE_RATE "Guide Rate"
#define L_FKEY_PULSE_GUIDE_RATE "Pulse Guide Rate"
#define L_FKEY_UTILITY_LIGHT "Lampe"
#define L_FKEY_RETICLE "Fadenkreuz"
#define L_FKEY_FOCUSER1 "Fokussierer 1"
#define L_FKEY_FOCUSER "Fokussierer"
#define L_FKEY_FOCUSER2 "Fokussierer 2"
#define L_FKEY_ROTATOR "Rotator"
#define L_FKEY_FEATURE_KEYS "Funtionstasten"



//@WTH#########################################
#define L_MM_SPIR "Spiralsuche"
#define L_MM_FINDH "DE Homing"
#define L_MOUNT_TELESCOPE "Teleskop waehlen"
#define L_MOUNT_TEL1 "30er Cassegrain"
#define L_MOUNT_TEL2 "Schiefspiegler"
//@WTH#########################################


// main menu root
#define L_MM_GOTO "Goto"
#define L_MM_SYNC "Sync"
#define L_MM_ALIGN "Ausrichtung"
#define L_MM_PARKING "Parken"
#define L_MM_TRACKING "Nachfuehrung"
#define L_MM_PEC "PEC"
#define L_MM_SETTINGS "Einstellungen"
#define L_MM_MAIN_MENU "Hauptmenue"

	  
// park menu
#define L_PARK "Parken"
#define L_SETPARK "Setz Parkpos."
#define L_UNPARK "Ausparken"
#define L_PARKING "Parken"
#define L_UNPARKING "Parke aus"

// tracking menu
#define L_TRK_START "Start"
#define L_TRK_STOP "Stop"
#define L_TRK_SIDEREAL "Stern"
#define L_TRK_SOLAR "Sonne"
#define L_TRK_LUNAR "Mond"
#define L_TRK_RESET "Raten Reset"
#define L_TRK_FASTER "Rate +0.02Hz"
#define L_TRK_SLOWER "Rate -0.02Hz"
#define L_TRACKING "Nachfuehrung"
#define L_TRK_CF "Komp. Voll"
#define L_TRK_CR "Komp. Refr."
#define L_TRK_CO "Komp. Aus"
#define L_TRK_CS "Komp. eine Achse"
#define L_TRK_CD "Komp. beide Achsen"

// PEC menu
#define L_PEC_PLAY "Abspielen"
#define L_PEC_STOP "Stop"
#define L_PEC_CLEAR "Loeschen"
#define L_PEC_RECORD "Aufzeichnen"
#define L_PEC_WRITENV "Schreibe in  NV"
#define L_PEC "PEC"
#define L_PEC_PLAYING "Wiedergabe"
#define L_PEC_STOPPED "Angehalten"
#define L_PEC_RECORDING "Zeichne auf"

// ---------------------- menu, mount ----------------------

// root menu
#define L_MOUNT_SPEED "Goto Geschw."
#define L_MOUNT_BL "Getriebespiel"
#define L_MOUNT_LIMITS "Grenzen"
#ifndef Kuppel
  #define L_MOUNT_PIER "Teleskopeite?"
#else
  #define L_MOUNT_PIER "Newton-Seite?"
#endif
#define L_MOUNT_CONFIG "Konfiguration"

#define L_MOUNT_FASTEST "Schnellste"
#define L_MOUNT_FASTER "Schneller"
#define L_MOUNT_DEFAULT_SPEED "Standard"
#define L_MOUNT_SLOWER "Langsamer"
#define L_MOUNT_SLOWEST "Langsamste"
#define L_MOUNT_SPEED "Goto Speed"

#define L_MOUNT_BL "Getriebespiel"
#define L_MOUNT_LIMIT_H "Horizont"
#define L_MOUNT_LIMIT_O "Oben"
#define L_MOUNT_LIMIT_ME "Meridian O"
#define L_MOUNT_LIMIT_MW "Meridian W"

#define L_MOUNT_LIMITS "Grenzen"
#define L_MOUNT_LIMIT_HORIZON "Horizontgrenze"
#define L_MOUNT_LIMIT_OVERHEAD "Obergrenze"
#define L_MOUNT_LIMIT_MERIDIAN_EAST "Meridiangrenze E"
#define L_MOUNT_LIMIT_MERIDIAN_WEST "Meridiangrenze W"
//@WTH#########################################
#ifndef Kuppel
#define L_MOUNT_PPS "Teleskopseite?"
#else
#define L_MOUNT_PPS "Newton-Seite?"
#endif
//@WTH#########################################
#define L_PPS_BEST "Beste"
#define L_PPS_EAST "Ost"
#define L_PPS_WEST "West"
#define L_MOUNT_TELESCOPE "Teleskop waehlen"
#define L_MOUNT_TEL1 "30er Cassegrain"
#define L_MOUNT_TEL2 "Schiefspiegler"

// -------------------- menu, settings ---------------------

// root menu
#define L_SET_DATE_TIME "Datum/Zeit"
#define L_SET_SITE "Ort"
#define L_SET_FOCUSER "Fokussierer"
#define L_SET_FOCUSER1 "Fokussierer1"
#define L_SET_FOCUSER2 "Fokussierer2"
#define L_SET_ROTATOR "Rotator"
#define L_SET_DISPLAY "Display"
#define L_SET_BUZ "Buzzer"
#define L_SET_MERIDIAN_FLIP "Meridianflip"
#define L_SET_CONFIG "Konfiguration"
#define L_SET_VERSION "Firmware Ver"
#define L_SETTINGS "Einstellungen"

// date/time
#define L_SET_LOCAL_DATE "Lokaldatum"
#define L_SET_LOCAL_PM "Lokalzeit PM"
#define L_SET_LOCAL_DST "Sommerzeit"

// display
#define L_SET_DISP_OFF "Abschalten"
#define L_SET_DISP_CONT "Kontrast"
#define L_SET_DISP_DIM_TO "Dimmen"
#define L_SET_DISP_BLANK_TO "Aus"
#define L_DISPLAY "Display"
#define L_SET_DISP_MSG1 "Taste drücken"
#define L_SET_DISP_MSG2 "zum Einschalten"
#define L_SET_DISP_MIN "Minimum"
#define L_SET_DISP_LOW "Wenig"
#define L_SET_DISP_HIGH "Hoch"
#define L_SET_DISP_MAX "Maximum"
#define L_SET_DISP_CONTRAST "Setze Kontrast"
#define L_SET_BUZZER "Buzzer An?"

// meridian flips
#define L_SET_MF_AUTO "Automatisch"
#define L_SET_MF_PAUSE "Pause bei Home"
#define L_SET_MF "Meridianflip"
#define L_SET_MF_AF "Auto-Flip?"
#define L_SET_MF_PF "Pause Flip?"

// site
#define L_SET_SITE_SELECT "Waehle Ort"
#define L_SET_SITE_LAT "Laenge"
#define L_SET_SITE_LONG "Breite"
#define L_SET_SITE_UTC "UTC Offset"
#define L_SET_SITE_TITLE "Orte"
#define L_SET_SITE_NUM "Ort"
#define L_SET_SITE_NUM_TITLE "Orte"

// rotator
#define L_ROT_RET_HOME "Gehe zu Homepos."
#define L_ROT_AT_HOME "bei Homepos."
#define L_ROT_DEROT "Derotation"
#define L_ROT_PA "Fahre zu PA"
#define L_ROT_REV "Umgekehrt"
#define L_ROTATOR "Rotator"
#define L_ROTATE "Rot"
#define L_ROT_AT_HOME_ZERO "Bei Home/Null?"
#define L_ROT_REVERSE "Umgekehrt"

// focuser
#define L_FOC_RET_HOME "Gehe zu Homepos."
#define L_FOC_AT_HOME  "bei Homepos."
#define L_FOCUSER "Fokussierer"
#define L_FOCUS "Foc"
#define L_AUX_FEATURE "Aux Feature"
#define L_FOC_AT_HALF "auf halben Weg?"
#define L_FOC_TC "Temperaturkomp?"
#define L_FOC_TC_COEF "Tempkoeff."
#define L_FOC_TC_DEADBAND "TC Totber."
#define L_FOC_TC_DB_UNITS "Mikrometer"
#define L_FOC_BACKLASH "Backlash"
#define L_FOC_BL_UNITS "Mikrometer"

// dew heater
#define L_AF_DEW_HEATER_ZERO "DP Zero, max pwr"
#define L_AF_DEW_HEATER_SPAN "DP Span, 0% pwr"

// intervalometer
#define L_AF_IV_COUNT "Belichtungen"
#define L_AF_IV_EXPOS "Bel.-Zeit"
#define L_AF_IV_DELAY "Bel.-Pause"

// -------------------- menu, sync/goto --------------------

// root menu
#define L_SG_SOLSYS "Sonnensystem"
#define L_SG_HERE "Hier"
#define L_SG_USER "Benutzer"
#define L_SG_FILTERS "Filter"
#define L_SG_COORDS "Koordinaten"
#define L_SG_HOME "Home"
#define L_SG_SYNC "Sync"
#define L_SG_GOTO "Goto"
#define L_SG_SPIRAL "Spiralsuche"
#define L_SG_LAST "Letzte"
#define L_SG_GOTO_LAST "Geh zu letzter"
#define L_SG_TARGET "Ziel"

// return home or reset at home
#define L_SG_HOME1 "Fahrt zur Homepos."
#define L_SG_HOME2 "loescht Modell"
#define L_SG_HOME3 "Geh zu Homepos"
#define L_SG_HOME4 "Reset bei"
#define L_SG_HOME5 "Goto"
#define L_SG_HOME6 "Homeposition"
#define L_SG_NO_OBJECT "Kein Objekt"
#define L_SG_NO_INIT "Nicht Initial."

// solsys
#define L_SG_SUN "Sonne"
#define L_SG_MER "Merkur"
#define L_SG_VEN "Venus"
#define L_SG_MAR "Mars"
#define L_SG_JUP "Jupiter"
#define L_SG_SAT "Saturn"
#define L_SG_URA "Uranus"
#define L_SG_NEP "Neptun"
#define L_SG_MOON "Mond"
#define L_SG_SSOL "Syncr. Sonnensyst."
#define L_SG_GSOL "Goto Sonnensyst."
#define L_SG_SOL_WARN1 "Ausricht. auf Sonne"
#define L_SG_SOL_WARN2 "ist gefaehrlich!"
#define L_SG_GSUN "Gehe zu Sonne"

// user catalogs
#define L_SG_USER_MSG1 "Waehle Benutzerkat."
#define L_SG_USER_MSG2 "Keine Kataloge"
#define L_SG_SYNC_USER "Sync Benutzer"
#define L_SG_GOTO_USER "Goto Benutzer"
#define L_SG_SYNC_USER_ITEM "Benutzerelement Sync."
#define L_SG_GOTO_USER_ITEM "Benutzerelement Goto"

// --------------------- menu, filters ---------------------

// root menu
#define L_SG_FILT_RESET "Reset Filter"
#define L_SG_FILT_HOR "Ueber Horizont"
#define L_SG_FILT_CON "Sternbild"
#define L_SG_FILT_TYP "Typ"
#define L_SG_FILT_MAG "Magnitude"
#define L_SG_FILT_NEAR "In der Nähe"
#define L_SG_FILT_VAR_MAX "Var* Max Per."
#define L_SG_FILT_DBL_MIN "Dbl* Min Abst."
#define L_SG_FILT_DBL_MAX "Dbl* Max Abst."
#define L_SG_FILT_ALLOW "Filter Erlaubt"
#define L_SG_FILT_MSG1 "Filter"
#define L_SG_FILT_MSG2 "Reset"
#define L_SG_FILT_MSG3 "Nur ueber"
#define L_SG_FILTER "Filter"

// filter constellation
#define L_SG_FILT_BY_CON "Filter Sternbild"

// filter type
#define L_SG_FILT_BY_TYPE "Filter nach Typ"

// filter magn
#define L_SG_FILT_BY_MAG "Filter Magnitude"

// filter nearby
#define L_SG_FILT_BY_NEAR "Filter Naehe"

// filter dbl min sep
#define L_SG_FILT_BY_SEP_MIN "Filter Dbl* Abst."
#define L_SG_SEP_MIN_MSG1 "Min Abst. muss"
#define L_SG_SEP_MIN_MSG2 "< Max Abst. sein"

// filter dbl max sep
#define L_SG_FILT_BY_SEP_MAX "Filter Dbl* Abst."
#define L_SG_SEP_MAX_MSG1 "Max Abst. muss"
#define L_SG_SEP_MAX_MSG2 "> Min Abst. sein"

// filter var max per
#define L_SG_FILT_BY_PER_MAX "Filter Var* Periode"

// ------------------- SmartController.h -----------------------
#define L_WIFI_SELECT "Auswahl WiFi:"
#define L_WIFI_CONNECTION1 "Starte WiFi:"
#define L_WIFI_CONNECTION2 "Restart WiFi:"
#define L_LOOKING "Suche nach"
#define L_WARNING "Warnung"
#define L_CONNECTION "Verbindung"
#define L_CONNECTING "Verbinde"
#define L_COORDINATES "Koordinaten"
#define L_OBSERVED_PLACE "Beobachtungsort"
#define L_WARNING "Warnung"
#define L_REBOOT "REBOOT"
#define L_DEVICE "DEVICE"
#define L_STAR "Stern"
#define L_ALIGN_MSG1 "Waehle einen Stern"
#define L_ALIGN_MSG2 "aus der Liste"
#define L_ABORTED "Abgebrochen"
#define L_LOST_MSG "Verloren"
#define L_SLEW_MSG1 "Schwenk zu Ziel"
#define L_SLEW_MSG2 "abgebrochen"
#define L_FKEY_GUIDE_DN "Nachf. langsamer"
#define L_FKEY_GUIDE_UP "Nachf. Schneller"
#define L_FKEY_PGUIDE_DN "PNachf. langs."
#define L_FKEY_PGUIDE_UP "PNachf. schneler"
#define L_FKEY_LAMP_DN "Util Dunkler"
#define L_FKEY_LAMP_UP "Util Heller"
#define L_FKEY_RETI_DN "Reticle Dunkler"
#define L_FKEY_RETI_UP "Reticle Heller"
#define L_FKEY_FOC_DN "Fokus rein"
#define L_FKEY_FOC_UP "Fokus raus"
#define L_FKEY_FOCF_DN "Fokus s. rein"
#define L_FKEY_FOCF_UP "Fokus s. raus"
#define L_FKEY_ROT_DN "Rotat. geg. Uhrz."
#define L_FKEY_ROT_UP "Rotat. Uhrz."
#define L_FKEY_ROTF_DN "Rotat. schnell"
#define L_FKEY_ROTF_UP "Rotat. schnell"
#define L_SUCCESS "Erfolgreich"
#define L_ADD_STAR "Stern hinzuf."
#define L_FAILED "Failed"
#define L_SLEWING_TO_STAR "Schwenke zu Stern"
#define L_RECENTER_STAR "Zentriere Stern"
#define L_SELECT_STAR "Waehle Stern"
#define L_CMD_NOTOK_1 "LX200 Kommando"
#define L_CMD_NOTOK_2 "fehlgeschl.!"
#define L_CMD_SETVF_1 "Wert setzen"
#define L_CMD_SETVF_2 "fehlgeschl.!"
#define L_CMD_GETVF_1 "Wert lesen"
#define L_CMD_GETVF_2 "fehlgeschl.!"
#define L_CMD_SETTG_1 "Ziel setzen"
#define L_CMD_SETTG_2 "fehlgeschl.!"
#define L_CMD_OBJSE_1 "Kein Objekt"
#define L_CMD_OBJSE_2 "gewaehlt!"
#define L_CMD_TGHOR_1 "Ziel ist"
#define L_CMD_TGHOR_2 "unter Horizont!"
#define L_CMD_TGOVH_1 "Ziel ist"
#define L_CMD_TGOVH_2 "ueber Grenze!"
#define L_CMD_STNBF_1 "Teleskop"
#define L_CMD_STNBF_2 "in Standby!"
#define L_CMD_PARKF_1 "Teleskope"
#define L_CMD_PARKF_2 "ist geparked!"
#define L_CMD_GOGOF_1 "Goto schon"
#define L_CMD_GOGOF_2 "im Gange!"
#define L_CMD_LIMTF_1 "Ziel"
#define L_CMD_LIMTF_2 "ausserhalb Grenzen!"
#define L_CMD_HARDF_1 "Teleskop"
#define L_CMD_HARDF_2 "Tardwarefehler!"
#define L_CMD_GOMOF_1 "Teleskop"
#define L_CMD_GOMOF_2 "in Bewegung!"
#define L_CMD_UNSPF_1 "Goto unbekannter"
#define L_CMD_UNSPF_2 "Fehler!"
#define L_CMD_ERROR "Fehler"
#define L_CMD_ISAOK_1 "LX200 Kommando"
#define L_CMD_ISAOK_2 "Fertig!"
#define L_CMD_SETOK_1 "Wert"
#define L_CMD_SETOK_2 "gesetzt!"
#define L_CMD_GETOK_1 "Wert"
#define L_CMD_GETOK_2 "gelesen!"
#define L_CMD_SNCOK_1 "Teleskop"
#define L_CMD_SNCOK_2 "Syncronisiert!"
#define L_CMD_GOTOK_1 "Schwenke zu"
#define L_CMD_GOTOK_2 "Ziel"

// ----------------------- u8g2_ext_catalog.cpp -------------------------

#define L_CAT_PER_UNK "Periode unbekannt"
#define L_CAT_PER_IRR "Periode irregulaer"
#define L_CAT_PER "Periode"
#define L_CAT_UNK "Unbekannt"
#define L_CAT_OC "offner Haufen"
#define L_CAT_GC "Kugelsternhaufen"
#define L_CAT_PN "Planetar. Nebel"
#define L_CAT_SG "Spiralgalaxie"
#define L_CAT_EG "Ellipt. Galaxie"
#define L_CAT_IG "Irregul. Galaxie"
#define L_CAT_KNT "Knoten"
#define L_CAT_SNR "SuperNova Rest"
#define L_CAT_GAL "Galaxie"
#define L_CAT_CN "Haufen + Nebel"
#define L_CAT_STR "Stern"
#define L_CAT_PLA "Planet"
#define L_CAT_CMT "Komet"
#define L_CAT_AST "Asteroid"


// ----------------------- u8g2_ext_input.cpp -------------------------

#define L_RIGHT_ASC "Rektaszension."
#define L_DECLINATION "Deklination"
#define L_LOCAL_TIME "Lokalzeit"
#define L_LATITUDE "Breitengrad"
#define L_LONGITUDE "Laengengrad"
