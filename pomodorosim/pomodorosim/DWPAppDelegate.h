//
//  DWPAppDelegate.h
//  pomodorosim
//
//  Created by davidw on 2/27/14.
//  Copyright (c) 2014 davidw. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DWPAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
