/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AirWatch-Structs.h"
#import <Foundation/NSObject.h>


@interface AWSettingsDataController : NSObject {
	sqlite3* _settingsDatabase;
}
@property(readonly, assign, nonatomic, getter=settingsDatabase) sqlite3* settingsDatabase;
-(BOOL)shouldReCreateDataBaseWithError:(int)error;
-(void)applicationDidReceiveMemoryWarning:(id)application;
-(void)deleteSettingForKey:(id)key layer:(int)layer;
-(id)dataWithSetting:(id)setting;
-(id)settingFromData:(id)data;
-(id)allLayerSettings:(int)settings;
-(BOOL)setSetting:(id)setting key:(id)key layer:(int)layer;
-(id)settingForKey:(id)key layer:(int)layer;
-(BOOL)createDatabaseStructure;
-(BOOL)layerExists:(int)exists;
-(void)addLayer:(id)layer;
-(BOOL)closeDatabase;
-(BOOL)openDatabase;
-(id)init;
@end
