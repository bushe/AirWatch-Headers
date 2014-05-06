/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWDataSamplerSample.h"


@interface AWDataSamplerPowerSample : AWDataSamplerSample {
	BOOL _powerLineStatus;
	BOOL _batteryLifePercent;
	BOOL _backupBatteryLifePercent;
	BOOL _batteryChemistry;
	unsigned short _batteryStatus;
	unsigned short _backupBatteryStatus;
	unsigned _batteryLifeTime;
	unsigned _batteryFullLifeTime;
	unsigned _backupBatteryLifeTime;
	unsigned _backupBatteryFullLifeTime;
	unsigned _batteryVoltage;
	int _batteryCurrent;
	int _batteryAverageCurrent;
	int _batteryAverageInterval;
	int _batteryDischarge;
	float _batteryTemperature;
	unsigned _backupBatteryVoltage;
}
@property(assign, nonatomic) BOOL batteryChemistry;
@property(assign, nonatomic) unsigned backupBatteryVoltage;
@property(assign, nonatomic) float batteryTemperature;
@property(assign, nonatomic) int batteryDischarge;
@property(assign, nonatomic) int batteryAverageInterval;
@property(assign, nonatomic) int batteryAverageCurrent;
@property(assign, nonatomic) int batteryCurrent;
@property(assign, nonatomic) unsigned batteryVoltage;
@property(assign, nonatomic) unsigned backupBatteryFullLifeTime;
@property(assign, nonatomic) unsigned backupBatteryLifeTime;
@property(assign, nonatomic) BOOL backupBatteryLifePercent;
@property(assign, nonatomic) unsigned short backupBatteryStatus;
@property(assign, nonatomic) unsigned batteryFullLifeTime;
@property(assign, nonatomic) unsigned batteryLifeTime;
@property(assign, nonatomic) BOOL batteryLifePercent;
@property(assign, nonatomic) unsigned short batteryStatus;
@property(assign, nonatomic) BOOL powerLineStatus;
-(id)data;
-(void)sample;
-(void)dealloc;
-(id)init;
@end
