//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDDevice, HMDSnapshotFile, NSObject, NSString;
@protocol HMDCameraSnapshotIDSStreamReceiverDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraSnapshotIDSStreamReceiver
{
    HMDSnapshotFile *_snapshotFile;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 16 = 0x10
    HMDDevice *_remoteDevice;	// 24 = 0x18
    id <HMDCameraSnapshotIDSStreamReceiverDelegate> _delegate;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00100000009c004a
- (void).cxx_destruct;	// IMP=0x00000000009bffd8
@property __weak id <HMDCameraSnapshotIDSStreamReceiverDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) HMDDevice *remoteDevice; // @synthesize remoteDevice=_remoteDevice;
@property(readonly) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly) HMDSnapshotFile *snapshotFile; // @synthesize snapshotFile=_snapshotFile;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;	// IMP=0x00000000009bf8df
- (id)logIdentifier;	// IMP=0x00000000009bf88f
- (void)_callFileReceivedWithError:(id)arg1;	// IMP=0x00000000009bf780
- (void)dealloc;	// IMP=0x00000000009bf69b
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 proxyService:(id)arg3 snapshotFile:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 remoteDevice:(id)arg7;	// IMP=0x00000000009bf4d5
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 snapshotFile:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 remoteDevice:(id)arg6;	// IMP=0x00000000009bf346

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
