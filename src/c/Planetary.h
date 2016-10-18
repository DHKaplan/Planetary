#ifndef Planetary_h 
#define Planetary_h 

extern int       BTConnected;
extern int       BTVibesDone;

extern Layer     *RedLineLayer;
extern Layer     *BatteryLineLayer;
extern Layer     *BTLayer;

extern TextLayer *text_battery_layer;

extern int       PersistBTLoss;     
extern char      PersistDateFormat[];

extern char      date_format[];  

#endif