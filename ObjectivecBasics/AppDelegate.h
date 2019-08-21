//
//  AppDelegate.h
//  ObjectivecBasics
//
//  Created by greens on 21/08/19.
//  Copyright © 2019 greens. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

