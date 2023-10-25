//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@protocol PXSharedLibrary;

@protocol PXMutableSharedLibraryStatusProvider <NSObject>
@property(retain, nonatomic) id <PXSharedLibrary> exiting;
@property(retain, nonatomic) id <PXSharedLibrary> sharedLibrary;
@property(retain, nonatomic) id <PXSharedLibrary> preview;
@property(retain, nonatomic) id <PXSharedLibrary> invitation;
@property(nonatomic) _Bool hasSharedLibrary;
@property(nonatomic) _Bool hasPreview;
@end
