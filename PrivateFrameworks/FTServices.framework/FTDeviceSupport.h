/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSString, NSDictionary;

@interface FTDeviceSupport : NSObject  {
    NSString *_lastDeviceID;
    NSString *_model;
    NSString *_productName;
    NSString *_productVersion;
    NSString *_buildVersion;
    BOOL _blockPost;
    BOOL _supportsiMessage;
    BOOL _supportsSMS;
    BOOL _supportsFT;
    BOOL _supportsWiFi;
    BOOL _supportsWLAN;
    BOOL _supportsNonWiFiFaceTime;
    BOOL _supportsCellularData;
    BOOL _shouldUseSIMState;
    BOOL _commCenterDead;
    BOOL _simBecameNotReady;
    int _carrierBundleSupported;
    BOOL _faceTimeBlocked;
    BOOL _iMessageBlocked;
    int _performanceClass;
}

@property(readonly) BOOL isTelephonyDevice;
@property(readonly) BOOL faceTimeAvailable;
@property(readonly) BOOL faceTimeBlocked;
@property(readonly) BOOL faceTimeSupported;
@property(readonly) BOOL iMessageAvailable;
@property(readonly) BOOL iMessageBlocked;
@property(readonly) BOOL iMessageSupported;
@property(readonly) BOOL madridAvailable;
@property(readonly) BOOL madridBlocked;
@property(readonly) BOOL madridSupported;
@property(readonly) BOOL conferencingEnabled;
@property(readonly) BOOL conferencingBlocked;
@property(readonly) BOOL conferencingAllowed;
@property(readonly) BOOL registrationSupported;
@property(readonly) BOOL commCenterDead;
@property(readonly) BOOL wantsBreakBeforeMake;
@property(readonly) BOOL isC2KEquipment;
@property(readonly) BOOL supportsSMSIdentification;
@property(readonly) BOOL supportsAppleIDIdentification;
@property(readonly) BOOL supportsSMS;
@property(readonly) BOOL supportsWiFi;
@property(readonly) BOOL supportsCellularData;
@property(readonly) BOOL supportsWLAN;
@property(readonly) BOOL supportsNonWiFiFaceTime;
@property(readonly) NSDictionary * CTNetworkInformation;
@property(readonly) NSString * deviceID;
@property(readonly) NSString * deviceIDPrefix;
@property(readonly) NSString * deviceTypeIDPrefix;
@property(readonly) NSString * model;
@property(readonly) NSString * userAgentString;
@property(readonly) NSString * productName;
@property(readonly) NSString * productVersion;
@property(readonly) NSString * productBuildVersion;
@property(readonly) NSString * telephoneNumber;
@property(readonly) int performanceClass;

+ (id)sharedInstance;

- (void)carrierSettingsChanged:(id)arg1;
- (void)_lockdownStateChanged:(id)arg1;
- (void)_commCenterAlive;
- (void)_registerForCoreTelephonyNotifications;
- (void)_registerForCommCenterReadyNotifications;
- (void)_unregisterForCommCenterReadyNotifications;
- (void)_unregisterForCoreTelephonyNotifications;
- (void)_unregisterForCarrierNotifications;
- (void)_registerForCarrierNotifications;
- (void)_registerForLockdownNotifications;
- (BOOL)iMessageSupported;
- (BOOL)supportsAppleIDIdentification;
- (id)deviceTypeIDPrefix;
- (id)telephoneNumber;
- (BOOL)isC2KEquipment;
- (id)productName;
- (id)deviceIDPrefix;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (id)model;
- (int)performanceClass;
- (BOOL)madridAvailable;
- (BOOL)madridSupported;
- (BOOL)faceTimeSupported;
- (BOOL)isTelephonyDevice;
- (id)CTNetworkInformation;
- (void)_handleRegistrationStateChanged:(id)arg1;
- (void)_handlePhoneNumberRegistrationStateChanged:(id)arg1;
- (void)_handleTechnologyChange:(id)arg1;
- (void)_simStatusChanged:(id)arg1;
- (void)_handleSIMInserted:(id)arg1;
- (BOOL)faceTimeBlocked;
- (BOOL)iMessageBlocked;
- (BOOL)iMessageAvailable;
- (BOOL)commCenterDead;
- (void)_carrierChanged;
- (void)_operatorChanged;
- (void)_generateProductInformation;
- (BOOL)_updateDeviceID;
- (BOOL)conferencingEnabled;
- (BOOL)madridBlocked;
- (void)_unregisterForCapabilityNotifications;
- (void)_unregisterForManagedConfigurationNotifications;
- (void)_registerForManagedConfigurationNotifications;
- (void)_registerForCapabilityNotifications;
- (void)_updateManagedConfigurationSettings;
- (void)_updateCapabilities;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (id)productBuildVersion;
- (id)deviceID;
- (id)userAgentString;
- (id)init;
- (void)dealloc;
- (id)productVersion;
- (BOOL)supportsNonWiFiFaceTime;
- (BOOL)wantsBreakBeforeMake;
- (BOOL)faceTimeAvailable;
- (BOOL)supportsSMS;
- (BOOL)supportsCellularData;
- (BOOL)supportsWiFi;
- (BOOL)supportsSMSIdentification;
- (BOOL)conferencingAllowed;
- (BOOL)conferencingBlocked;
- (BOOL)registrationSupported;
- (BOOL)supportsWLAN;

@end