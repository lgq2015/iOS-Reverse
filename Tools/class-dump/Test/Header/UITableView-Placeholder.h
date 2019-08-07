//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

@class NSString, UIImage, UIView;

@interface UITableView (Placeholder)
+ (void)load;
- (void)dealloc;
- (void)onDeviceOrientationChange:(id)arg1;
- (void)si_tapDefalutNoDataView:(id)arg1;
- (void)layoutDefaultView:(id)arg1;
- (id)defaultNoDataView;
- (id)defaultCustomView;
- (id)placeholderImageView;
- (id)placeholderLabel;
- (void)setNoDataView:(id)arg1;
- (id)noDataView;
@property(copy, nonatomic) UIImage *placeholderImage;
@property(copy, nonatomic) NSString *placeholderText;
@property(copy, nonatomic) UIView *placeholderCustomView;
@property(copy, nonatomic) CDUnknownBlockType placeholderClickBlock;
@property(nonatomic) _Bool showPlaceholder;
- (void)showPlaceholderAction;
- (void)si_reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)si_deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)si_insertRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)si_reloadSections:(id)arg1 withRowAnimation:(long long)arg2;
- (void)si_deleteSections:(id)arg1 withRowAnimation:(long long)arg2;
- (void)si_insertSections:(id)arg1 withRowAnimation:(long long)arg2;
- (void)si_reloadData;
@end

