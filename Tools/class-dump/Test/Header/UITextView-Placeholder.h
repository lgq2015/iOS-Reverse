//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@interface UITextView (Placeholder)
+ (id)observingKeys;
+ (id)defaultPlaceholderColor;
+ (void)load;
- (void)updatePlaceholderLabel;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setNeedsUpdateFont:(_Bool)arg1;
- (_Bool)needsUpdateFont;
- (void)setPlaceholderColor:(id)arg1;
- (id)placeholderColor;
- (void)setAttributedPlaceholder:(id)arg1;
- (id)attributedPlaceholder;
- (void)setPlaceholder:(id)arg1;
- (id)placeholder;
- (id)placeholderLabel;
- (void)swizzledDealloc;
@end

