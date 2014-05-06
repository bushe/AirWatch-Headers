/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "AirWatch-Structs.h"

@class NSString;

@interface AWPDFFontDescriptor : NSObject {
	BOOL _symbolic;
	float _ascent;
	float _descent;
	float _leading;
	float _capHeight;
	float _xHeight;
	float _averageWidth;
	float _maxWidth;
	float _missingWidth;
	float _verticalStemWidth;
	float _horizontalStemWidth;
	float _italicAngle;
	unsigned _flags;
	NSString* _fontName;
	CGRect _bounds;
}
@property(copy, nonatomic) NSString* fontName;
@property(readonly, assign, nonatomic, getter=isSymbolic) BOOL symbolic;
@property(assign, nonatomic) unsigned flags;
@property(assign, nonatomic) float italicAngle;
@property(assign, nonatomic) float horizontalStemWidth;
@property(assign, nonatomic) float verticalStemWidth;
@property(assign, nonatomic) float missingWidth;
@property(assign, nonatomic) float maxWidth;
@property(assign, nonatomic) float averageWidth;
@property(assign, nonatomic) float xHeight;
@property(assign, nonatomic) float capHeight;
@property(assign, nonatomic) float leading;
@property(assign, nonatomic) float descent;
@property(assign, nonatomic) float ascent;
@property(assign, nonatomic) CGRect bounds;
-(void)dealloc;
-(id)initWithPDFDictionary:(CGPDFDictionaryRef)pdfdictionary;
@end
