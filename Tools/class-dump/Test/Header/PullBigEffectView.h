//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface PullBigEffectView : UIView
{
    _Bool _firstLayoutSubviews;
    double _headerH;
    struct UIEdgeInsets _contentInset;
}

@property(nonatomic) double headerH; // @synthesize headerH=_headerH;
@property(nonatomic, getter=isfirstLayoutSubviews) _Bool firstLayoutSubviews; // @synthesize firstLayoutSubviews=_firstLayoutSubviews;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void)animationHandle:(struct CGPoint)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;

@end
