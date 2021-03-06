/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTAWDMetric : NSObject {
    id  _metric;
    AWDMetricContainer * _metricContainer;
}

@property (nonatomic, readonly, retain) id metric;

+ (id)metricForDelayAckFromSecondaryDeviceWithSectionID:(id)arg1 publisherMatchID:(id)arg2 companionPublicationDate:(id)arg3 startTime:(id)arg4 connectionStatus:(unsigned int)arg5 origConnectionStatus:(unsigned int)arg6 timedOut:(BOOL)arg7;
+ (id)metricForDelayToSyncWithStartTime:(id)arg1 initial:(BOOL)arg2;
+ (id)metricForDelayWithID:(unsigned long)arg1 class:(Class)arg2 sectionID:(id)arg3 publisherMatchID:(id)arg4 companionPublicationDate:(id)arg5 isGizmoDate:(BOOL)arg6 startTime:(id)arg7;
+ (id)metricForDelayWithID:(unsigned long)arg1 class:(Class)arg2 sectionID:(id)arg3 publisherMatchID:(id)arg4 companionPublicationDate:(id)arg5 startTime:(id)arg6;
+ (id)metricForDelayWithID:(unsigned long)arg1 class:(Class)arg2 sectionID:(id)arg3 publisherMatchID:(id)arg4 companionPublicationDate:(id)arg5 startTime:(id)arg6 connectionStatus:(unsigned int)arg7;
+ (id)metricForDelayWithID:(unsigned long)arg1 class:(Class)arg2 sectionID:(id)arg3 publisherMatchID:(id)arg4 companionPublicationDate:(id)arg5 startTime:(id)arg6 connectionStatus:(unsigned int)arg7 hasPublicationDate:(BOOL)arg8;
+ (id)metricForDelayWithID:(unsigned long)arg1 class:(Class)arg2 startTime:(id)arg3;

- (void).cxx_destruct;
- (id)initWithMetricID:(unsigned long)arg1 class:(Class)arg2;
- (id)metric;
- (void)submit;

@end
