//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIPanGestureRecognizer;

@interface UIView (draggable)
- (void)enableDragging;
- (void)setDraggable:(_Bool)arg1;
- (void)adjustAnchorPointForGestureRecognizer:(id)arg1;
- (void)handlePan:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType draggingEndedBlock;
@property(copy, nonatomic) CDUnknownBlockType draggingMovedBlock;
@property(copy, nonatomic) CDUnknownBlockType draggingStartedBlock;
@property(nonatomic) _Bool shouldMoveAlongX;
@property(nonatomic) _Bool shouldMoveAlongY;
@property(nonatomic) struct CGRect handle;
@property(nonatomic) struct CGRect cagingArea;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture;
@end

