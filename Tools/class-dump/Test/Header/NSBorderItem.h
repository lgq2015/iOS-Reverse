//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIColor;

@interface NSBorderItem : NSObject
{
    int _lineCap;
    unsigned long long _borderType;
    double _borderWidth;
    UIColor *_borderColor;
    double _lineDashPhase;
    NSArray *_lineDashPattern;
}

@property(retain, nonatomic) NSArray *lineDashPattern; // @synthesize lineDashPattern=_lineDashPattern;
@property(nonatomic) double lineDashPhase; // @synthesize lineDashPhase=_lineDashPhase;
@property(nonatomic) int lineCap; // @synthesize lineCap=_lineCap;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) unsigned long long borderType; // @synthesize borderType=_borderType;
- (void).cxx_destruct;

@end

