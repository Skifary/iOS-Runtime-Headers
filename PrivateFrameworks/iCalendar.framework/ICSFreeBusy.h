/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class ICSDate, NSArray, ICSUserAddress, NSString, ICSDuration;

@interface ICSFreeBusy : ICSComponent  {
}

@property(retain) NSArray * attendee;
@property(retain) ICSDate * created;
@property(retain) ICSDate * dtend;
@property(retain) ICSDate * dtstamp;
@property(retain) ICSDate * dtstart;
@property(retain) ICSDuration * duration;
@property(retain) NSArray * freebusy;
@property(retain) ICSUserAddress * organizer;
@property(retain) NSString * summary;
@property(retain) NSString * uid;
@property(retain) NSString * x_calendarserver_mask_uid;

+ (id)name;

- (id)x_calendarserver_mask_uid;
- (void)setFreebusy:(id)arg1;
- (id)freebusy;
- (void)setX_calendarserver_mask_uid:(id)arg1;

@end