//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDate.h"

@class NSDateComponents, NSString;

@interface NSDate (Extension)
+ (id)dateComponents:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3;
@property(readonly, nonatomic) NSDateComponents *components;
@property(readonly, copy, nonatomic) NSString *timestamp;
@property(readonly, nonatomic) _Bool isInOneHour;
@property(readonly, nonatomic) _Bool isInOneMinute;
@property(readonly, nonatomic) _Bool isThisYear;
@property(readonly, nonatomic) _Bool isTomorrow;
@property(readonly, nonatomic) _Bool isYesterday;
@property(readonly, nonatomic) _Bool isToday;
@property(readonly, nonatomic) long long quarter;
@property(readonly, nonatomic) long long yearForWeekOfYear;
@property(readonly, nonatomic) long long weekOfYear;
@property(readonly, nonatomic) long long weekOfMonth;
@property(readonly, nonatomic) long long weekdayOrdinal;
@property(readonly, nonatomic) long long weekday;
@property(readonly, nonatomic) long long nanosecond;
@property(readonly, nonatomic) long long second;
@property(readonly, nonatomic) long long minute;
@property(readonly, nonatomic) long long hour;
@property(readonly, nonatomic) long long day;
@property(readonly, nonatomic) long long month;
@property(readonly, nonatomic) long long year;
@end

