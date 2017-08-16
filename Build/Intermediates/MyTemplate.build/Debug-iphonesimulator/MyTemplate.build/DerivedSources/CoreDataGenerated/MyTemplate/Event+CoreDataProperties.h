//
//  Event+CoreDataProperties.h
//  
//
//  Created by Lauren Nicole Roth on 8/15/17.
//
//  This file was automatically generated and should not be edited.
//

#import "Event+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface Event (CoreDataProperties)

+ (NSFetchRequest<Event *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSDate *timestamp;

@end

NS_ASSUME_NONNULL_END
