/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSIdentityProviderRequestContext : NSObject {
    BOOL  _attemptedVerificationStateReset;
    id /* block */  _completionHandler;
    VSIdentityProviderRequest * _request;
}

@property (nonatomic) BOOL attemptedVerificationStateReset;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) VSIdentityProviderRequest *request;

- (void).cxx_destruct;
- (BOOL)attemptedVerificationStateReset;
- (id /* block */)completionHandler;
- (id)request;
- (void)setAttemptedVerificationStateReset:(BOOL)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setRequest:(id)arg1;

@end