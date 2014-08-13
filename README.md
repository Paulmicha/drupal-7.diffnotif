Differences notification
========================

Drupal 7 module : simple way of notifying (by email) a configurable list of users upon modification of nodes from a configurable list of content types

### Use case :
A list of users must always be notified by email
when any content of a list of content types is modified by someone else,
and they must receive the list of modifications (see required 'diff' module).

### Restrictions :
- Single list of subscribers (no too many ~ 20 max maybe, because there is no queue for sending emails)
- Single list of content types
- Only triggers on modification of these nodes

### Alternatives :
- Comparison of notifications / subscriptions modules :  
   @see https://groups.drupal.org/node/15928
- Message stack :  
   @see http://drupal.org/project/message