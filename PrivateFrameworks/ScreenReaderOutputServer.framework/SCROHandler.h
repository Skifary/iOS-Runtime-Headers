/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class NSLock;

@interface SCROHandler : NSObject <SCROHandlerProtocol> {
    id _callbackDelegate;
    NSLock *_lock;
    BOOL isInvalid;
}


- (void)setCallbackDelegate:(id)arg1;
- (id)callbackDelegate;
- (int)handleGetValue:(id*)arg1 forKey:(int)arg2 withObject:(id)arg3 trusted:(BOOL)arg4;
- (int)handlePerformActionForKey:(int)arg1 trusted:(BOOL)arg2;
- (int)handleRegisterCallbackForKey:(int)arg1 trusted:(BOOL)arg2;
- (int)handleSetValue:(id)arg1 forKey:(int)arg2 trusted:(BOOL)arg3;
- (int)handleGetValue:(id*)arg1 forKey:(int)arg2 trusted:(BOOL)arg3;
- (void)invalidate;
- (void)unlock;
- (void)lock;
- (id)init;
- (void)dealloc;

@end