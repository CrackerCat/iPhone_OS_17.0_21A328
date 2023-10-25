//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol VCTelephonyInterfaceDelegate;

__attribute__((visibility("hidden")))
@interface VCTelephonyInterface : NSObject
{
    id _delegate;	// 8 = 0x8
}

- (void)notifyCodecModeChangeEventToCT:(struct _VCAudioCodecModeChangeEvent)arg1;	// IMP=0x0000000000451130
- (id)translateVocoderTypeToCoreAudioType:(id)arg1;	// IMP=0x00000000004510fe
- (void)handleVocoderNotificationWithInfo:(id)arg1;	// IMP=0x00000000004510f8
- (void)handleTelephonyNotification:(id)arg1 withInfo:(id)arg2;	// IMP=0x00000000004510f2
- (void)queryAnbrBitrateRecommendation:(unsigned int)arg1 direction:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000004510ec
- (void)getAnbrActivationStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000004510e6
@property id <VCTelephonyInterfaceDelegate> delegate;
- (void)unregisterForNotifications;	// IMP=0x00000000004510c1
- (_Bool)registerForNotifications;	// IMP=0x00000000004510b9
- (void)setupVCMediaStreamRateAdaptationConfig:(struct tagVCMediaStreamRateAdaptationConfig *)arg1;	// IMP=0x0000000000450df1
- (unsigned int)validateCarrierBundleConfigParameters:(id)arg1 forKey:(id)arg2 defaultValue:(unsigned int)arg3 minValue:(unsigned int)arg4 maxValue:(unsigned int)arg5;	// IMP=0x0000000000450c0f
- (_Bool)getCarrierBundleValue:(id *)arg1 forKey:(id)arg2;	// IMP=0x0000000000450c07
- (void)dealloc;	// IMP=0x0000000000450bb5
- (id)initWithTelephonySubscriptionSlot:(long long)arg1;	// IMP=0x0000000000450ba3
- (id)init;	// IMP=0x0000000000450b9b

@end
