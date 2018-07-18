#import <Foundation/Foundation.h>
#import "NSDate+Helper.h"

@interface NSDate (HelperControlthirdsdk)
+ (void)initializeStaticsControlthirdsdk:(NSString *)ControlThirdSdk;
+ (void)sharedCalendarControlthirdsdk:(NSString *)ControlThirdSdk;
+ (void)sharedDateFormatterControlthirdsdk:(NSString *)ControlThirdSdk;
- (void)daysAgoControlthirdsdk:(NSString *)ControlThirdSdk;
- (void)daysAgoAgainstMidnightControlthirdsdk:(NSString *)ControlThirdSdk;
- (void)stringDaysAgoControlthirdsdk:(NSString *)ControlThirdSdk;
- (void)stringDaysAgoAgainstMidnight:(BOOL)flag ControlThirdSdk:(NSString *)ControlThirdSdk;
- (void)hourControlthirdsdk:(NSString *)ControlThirdSdk;
- (void)minuteControlthirdsdk:(NSString *)ControlThirdSdk;
- (void)yearControlthirdsdk:(NSString *)ControlThirdSdk;
- (void)monthControlthirdsdk:(NSString *)ControlThirdSdk;
- (void)dayControlthirdsdk:(NSString *)ControlThirdSdk;
- (void)secondControlthirdsdk:(NSString *)ControlThirdSdk;
- (void)utcTimeStampControlthirdsdk:(NSString *)ControlThirdSdk;
- (void)weekdayControlthirdsdk:(NSString *)ControlThirdSdk;
- (void)weekNumberControlthirdsdk:(NSString *)ControlThirdSdk;
+ (void)dateFromString:(NSString *)string ControlThirdSdk:(NSString *)ControlThirdSdk;
+ (void)dateFromString:(NSString *)string withFormat:(NSString *)format ControlThirdSdk:(NSString *)ControlThirdSdk;
+ (void)stringFromDate:(NSDate *)date withFormat:(NSString *)format ControlThirdSdk:(NSString *)ControlThirdSdk;
+ (void)stringFromDate:(NSDate *)date ControlThirdSdk:(NSString *)ControlThirdSdk;
+ (void)stringForDisplayFromDate:(NSDate *)date prefixed:(BOOL)prefixed alwaysDisplayTime:(BOOL)displayTime ControlThirdSdk:(NSString *)ControlThirdSdk;
+ (void)stringForDisplayFromDate:(NSDate *)date prefixed:(BOOL)prefixed ControlThirdSdk:(NSString *)ControlThirdSdk;
+ (void)stringForDisplayFromDate:(NSDate *)date ControlThirdSdk:(NSString *)ControlThirdSdk;
- (void)stringWithFormat:(NSString *)format ControlThirdSdk:(NSString *)ControlThirdSdk;
- (void)stringWithFormatISO8601Controlthirdsdk:(NSString *)ControlThirdSdk;
- (void)stringControlthirdsdk:(NSString *)ControlThirdSdk;
- (void)stringWithDateStyle:(NSDateFormatterStyle)dateStyle timeStyle:(NSDateFormatterStyle)timeStyle ControlThirdSdk:(NSString *)ControlThirdSdk;
- (void)beginningOfWeekControlthirdsdk:(NSString *)ControlThirdSdk;
- (void)beginningOfDayControlthirdsdk:(NSString *)ControlThirdSdk;
- (void)endOfWeekControlthirdsdk:(NSString *)ControlThirdSdk;
+ (void)dateFormatStringControlthirdsdk:(NSString *)ControlThirdSdk;
+ (void)timeFormatStringControlthirdsdk:(NSString *)ControlThirdSdk;
+ (void)timestampFormatStringControlthirdsdk:(NSString *)ControlThirdSdk;
+ (void)dbFormatStringControlthirdsdk:(NSString *)ControlThirdSdk;

@end
