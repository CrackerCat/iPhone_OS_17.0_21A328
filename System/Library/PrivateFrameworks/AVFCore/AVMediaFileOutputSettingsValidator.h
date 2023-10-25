//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVMediaFileType;

__attribute__((visibility("hidden")))
@interface AVMediaFileOutputSettingsValidator : NSObject
{
    AVMediaFileType *_fileType;	// 8 = 0x8
}

+ (id)mediaFileOutputSettingsValidatorForFileType:(id)arg1;	// IMP=0x001000000011ebde
+ (void)initialize;	// IMP=0x001000000011ea8f
- (_Bool)validateVideoOutputSettings:(id)arg1 reason:(id *)arg2;	// IMP=0x000000000011efae
- (_Bool)validateAudioOutputSettings:(id)arg1 reason:(id *)arg2;	// IMP=0x000000000011edb5
@property(readonly, nonatomic) AVMediaFileType *fileType;
- (void)dealloc;	// IMP=0x000000000011ed70
- (id)initWithFileType:(id)arg1;	// IMP=0x000000000011ec68
- (id)init;	// IMP=0x000000000011ec54

@end
