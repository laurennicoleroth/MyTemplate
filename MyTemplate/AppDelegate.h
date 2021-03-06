//
//  AppDelegate.h
//  MyTemplate
//
//  Created by Lauren Nicole Roth on 8/15/17.
//  Copyright © 2017 Lauren Nicole Roth. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

