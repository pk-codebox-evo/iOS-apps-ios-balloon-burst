//
//  AppDelegate.h
//  balloon-burst
//
//  Created by Jamie Ly on 12/27/11.
//  Copyright University of Pennsylvania 2011. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
