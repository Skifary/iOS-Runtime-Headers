/* Generated by RuntimeBrowser.
 */

@protocol SBFAuthenticationStatusProvider <NSObject, SBFAuthenticationRevoker>

@required

- (BOOL)hasAuthenticatedAtLeastOnceSinceBoot;
- (BOOL)hasPasscodeSet;
- (BOOL)isAuthenticated;
- (BOOL)isAuthenticatedCached;

@end
