//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSString, UIButton, UITextView;

@interface GHConsoleRootViewController : UIViewController
{
    UITextView *_textView;
    UIButton *_clearBtn;
    _Bool _scrollEnable;
    NSString *_text;
    CDUnknownBlockType _clearLogText;
}

@property(copy, nonatomic) CDUnknownBlockType clearLogText; // @synthesize clearLogText=_clearLogText;
@property(nonatomic) _Bool scrollEnable; // @synthesize scrollEnable=_scrollEnable;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)clearText;
- (void)configClearBtn;
- (void)configTextField;
- (void)viewDidLoad;

@end
