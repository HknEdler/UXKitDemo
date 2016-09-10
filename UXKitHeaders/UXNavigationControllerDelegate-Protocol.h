//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  7 2015 21:36:47).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UXKit/NSObject-Protocol.h>

@class UXNavigationController, UXViewController;
@protocol UXViewControllerAnimatedTransitioning, UXViewControllerInteractiveTransitioning;

@protocol UXNavigationControllerDelegate <NSObject>

@optional
- (BOOL)navigationController:(UXNavigationController *)arg1 shouldBeginInteractivePopFromViewController:(UXViewController *)arg2 toViewController:(UXViewController *)arg3;
- (id <UXViewControllerAnimatedTransitioning>)navigationController:(UXNavigationController *)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(UXViewController *)arg3 toViewController:(UXViewController *)arg4;
- (id <UXViewControllerInteractiveTransitioning>)navigationController:(UXNavigationController *)arg1 interactionControllerForAnimationController:(id <UXViewControllerAnimatedTransitioning>)arg2;
- (void)navigationController:(UXNavigationController *)arg1 didShowViewController:(UXViewController *)arg2;
- (void)navigationController:(UXNavigationController *)arg1 willShowViewController:(UXViewController *)arg2;
@end
