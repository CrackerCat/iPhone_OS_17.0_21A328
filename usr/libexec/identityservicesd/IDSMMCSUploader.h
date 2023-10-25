//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSEncryptionController, IDSTransferServicesController;

@interface IDSMMCSUploader : NSObject
{
    IDSEncryptionController *_encryptionController;	// 8 = 0x8
    IDSTransferServicesController *_transferServicesController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000399b8e
- (id)uploadData:(id)arg1 toEndpoint:(id)arg2 onTopic:(id)arg3 forGUID:(id)arg4 encryptionType:(unsigned long long)arg5;	// IMP=0x0010000000398b0e
- (id)initWithEncryptionController:(id)arg1 transferServicesController:(id)arg2;	// IMP=0x0010000000398a75

@end
