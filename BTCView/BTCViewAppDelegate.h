//
//  BTCViewAppDelegate.h
//  BTCView
//
//  Created by Fernando Chorney on 11-06-18.
//  Copyright 2011 Rollout Studios. All rights reserved.
//

#import "MainViewController.h"

@interface BTCViewAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *_window;
    MainViewController *_mvc;
    UINavigationController *_navigationController;
}

@property (nonatomic, retain) UIWindow *window;
@property (nonatomic, retain) MainViewController *mvc;
@property (nonatomic, retain) UINavigationController *navigationController;

@end
