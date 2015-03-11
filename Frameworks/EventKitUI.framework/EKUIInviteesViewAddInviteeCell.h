/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSArray, NSLayoutConstraint, NSString, UILabel;

@interface EKUIInviteesViewAddInviteeCell : UITableViewCell {
    double _leftInset;
    NSLayoutConstraint *_leftInsetConstraint;
    NSArray *_persistentConstraints;
    NSString *_simpleText;
    UILabel *_simpleTextLabel;
}

@property double leftInset;
@property(retain) NSLayoutConstraint * leftInsetConstraint;
@property(retain) NSArray * persistentConstraints;
@property(retain) NSString * simpleText;
@property(retain) UILabel * simpleTextLabel;

+ (id)_simpleTextLabelFont;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (double)leftInset;
- (id)leftInsetConstraint;
- (id)persistentConstraints;
- (void)setLeftInset:(double)arg1;
- (void)setLeftInsetConstraint:(id)arg1;
- (void)setPersistentConstraints:(id)arg1;
- (void)setSimpleText:(id)arg1;
- (void)setSimpleTextLabel:(id)arg1;
- (id)simpleText;
- (id)simpleTextLabel;
- (void)updateConstraints;

@end