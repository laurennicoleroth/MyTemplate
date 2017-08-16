//
//  Event+CoreDataProperties.m
//  
//
//  Created by Lauren Nicole Roth on 8/15/17.
//
//  This file was automatically generated and should not be edited.
//

#import "Event+CoreDataProperties.h"

@implementation Event (CoreDataProperties)

+ (NSFetchRequest<Event *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"Event"];
}

@dynamic timestamp;

@end
