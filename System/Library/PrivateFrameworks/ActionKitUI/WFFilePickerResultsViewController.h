//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSArray, WFRemoteFileListView;
@protocol WFRemoteFileListViewDelegate;

__attribute__((visibility("hidden")))
@interface WFFilePickerResultsViewController : UIViewController
{
    NSArray *_files;	// 8 = 0x8
    id <WFRemoteFileListViewDelegate> _delegate;	// 16 = 0x10
    WFRemoteFileListView *_fileListView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000005546c
@property(readonly, nonatomic) __weak WFRemoteFileListView *fileListView; // @synthesize fileListView=_fileListView;
@property(readonly, nonatomic) __weak id <WFRemoteFileListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *files; // @synthesize files=_files;
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000055357
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000055316
- (void)updateContentInset;	// IMP=0x000000000005512b
- (void)loadView;	// IMP=0x0000000000054fc2
- (void)dealloc;	// IMP=0x0000000000054f40
- (id)initWithFileListDelegate:(id)arg1;	// IMP=0x0000000000054e6a

@end
