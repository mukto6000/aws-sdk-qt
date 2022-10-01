// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "route53resolverrequest.h"
#include "route53resolverrequest_p.h"

namespace QtAws {
namespace Route53Resolver {

/*!
 * \class QtAws::Route53Resolver::Route53ResolverRequest
 * \brief The Route53ResolverRequest class provides an interface for Route53Resolver requests.
 *
 * \inmodule QtAwsRoute53Resolver
 */

/*!
 * \enum Route53ResolverRequest::Action
 *
 * This enum describes the actions that can be performed as Route53Resolver
 * requests.
 *
 * \value AssociateFirewallRuleGroupAction Route53Resolver AssociateFirewallRuleGroup action.
 * \value AssociateResolverEndpointIpAddressAction Route53Resolver AssociateResolverEndpointIpAddress action.
 * \value AssociateResolverQueryLogConfigAction Route53Resolver AssociateResolverQueryLogConfig action.
 * \value AssociateResolverRuleAction Route53Resolver AssociateResolverRule action.
 * \value CreateFirewallDomainListAction Route53Resolver CreateFirewallDomainList action.
 * \value CreateFirewallRuleAction Route53Resolver CreateFirewallRule action.
 * \value CreateFirewallRuleGroupAction Route53Resolver CreateFirewallRuleGroup action.
 * \value CreateResolverEndpointAction Route53Resolver CreateResolverEndpoint action.
 * \value CreateResolverQueryLogConfigAction Route53Resolver CreateResolverQueryLogConfig action.
 * \value CreateResolverRuleAction Route53Resolver CreateResolverRule action.
 * \value DeleteFirewallDomainListAction Route53Resolver DeleteFirewallDomainList action.
 * \value DeleteFirewallRuleAction Route53Resolver DeleteFirewallRule action.
 * \value DeleteFirewallRuleGroupAction Route53Resolver DeleteFirewallRuleGroup action.
 * \value DeleteResolverEndpointAction Route53Resolver DeleteResolverEndpoint action.
 * \value DeleteResolverQueryLogConfigAction Route53Resolver DeleteResolverQueryLogConfig action.
 * \value DeleteResolverRuleAction Route53Resolver DeleteResolverRule action.
 * \value DisassociateFirewallRuleGroupAction Route53Resolver DisassociateFirewallRuleGroup action.
 * \value DisassociateResolverEndpointIpAddressAction Route53Resolver DisassociateResolverEndpointIpAddress action.
 * \value DisassociateResolverQueryLogConfigAction Route53Resolver DisassociateResolverQueryLogConfig action.
 * \value DisassociateResolverRuleAction Route53Resolver DisassociateResolverRule action.
 * \value GetFirewallConfigAction Route53Resolver GetFirewallConfig action.
 * \value GetFirewallDomainListAction Route53Resolver GetFirewallDomainList action.
 * \value GetFirewallRuleGroupAction Route53Resolver GetFirewallRuleGroup action.
 * \value GetFirewallRuleGroupAssociationAction Route53Resolver GetFirewallRuleGroupAssociation action.
 * \value GetFirewallRuleGroupPolicyAction Route53Resolver GetFirewallRuleGroupPolicy action.
 * \value GetResolverConfigAction Route53Resolver GetResolverConfig action.
 * \value GetResolverDnssecConfigAction Route53Resolver GetResolverDnssecConfig action.
 * \value GetResolverEndpointAction Route53Resolver GetResolverEndpoint action.
 * \value GetResolverQueryLogConfigAction Route53Resolver GetResolverQueryLogConfig action.
 * \value GetResolverQueryLogConfigAssociationAction Route53Resolver GetResolverQueryLogConfigAssociation action.
 * \value GetResolverQueryLogConfigPolicyAction Route53Resolver GetResolverQueryLogConfigPolicy action.
 * \value GetResolverRuleAction Route53Resolver GetResolverRule action.
 * \value GetResolverRuleAssociationAction Route53Resolver GetResolverRuleAssociation action.
 * \value GetResolverRulePolicyAction Route53Resolver GetResolverRulePolicy action.
 * \value ImportFirewallDomainsAction Route53Resolver ImportFirewallDomains action.
 * \value ListFirewallConfigsAction Route53Resolver ListFirewallConfigs action.
 * \value ListFirewallDomainListsAction Route53Resolver ListFirewallDomainLists action.
 * \value ListFirewallDomainsAction Route53Resolver ListFirewallDomains action.
 * \value ListFirewallRuleGroupAssociationsAction Route53Resolver ListFirewallRuleGroupAssociations action.
 * \value ListFirewallRuleGroupsAction Route53Resolver ListFirewallRuleGroups action.
 * \value ListFirewallRulesAction Route53Resolver ListFirewallRules action.
 * \value ListResolverConfigsAction Route53Resolver ListResolverConfigs action.
 * \value ListResolverDnssecConfigsAction Route53Resolver ListResolverDnssecConfigs action.
 * \value ListResolverEndpointIpAddressesAction Route53Resolver ListResolverEndpointIpAddresses action.
 * \value ListResolverEndpointsAction Route53Resolver ListResolverEndpoints action.
 * \value ListResolverQueryLogConfigAssociationsAction Route53Resolver ListResolverQueryLogConfigAssociations action.
 * \value ListResolverQueryLogConfigsAction Route53Resolver ListResolverQueryLogConfigs action.
 * \value ListResolverRuleAssociationsAction Route53Resolver ListResolverRuleAssociations action.
 * \value ListResolverRulesAction Route53Resolver ListResolverRules action.
 * \value ListTagsForResourceAction Route53Resolver ListTagsForResource action.
 * \value PutFirewallRuleGroupPolicyAction Route53Resolver PutFirewallRuleGroupPolicy action.
 * \value PutResolverQueryLogConfigPolicyAction Route53Resolver PutResolverQueryLogConfigPolicy action.
 * \value PutResolverRulePolicyAction Route53Resolver PutResolverRulePolicy action.
 * \value TagResourceAction Route53Resolver TagResource action.
 * \value UntagResourceAction Route53Resolver UntagResource action.
 * \value UpdateFirewallConfigAction Route53Resolver UpdateFirewallConfig action.
 * \value UpdateFirewallDomainsAction Route53Resolver UpdateFirewallDomains action.
 * \value UpdateFirewallRuleAction Route53Resolver UpdateFirewallRule action.
 * \value UpdateFirewallRuleGroupAssociationAction Route53Resolver UpdateFirewallRuleGroupAssociation action.
 * \value UpdateResolverConfigAction Route53Resolver UpdateResolverConfig action.
 * \value UpdateResolverDnssecConfigAction Route53Resolver UpdateResolverDnssecConfig action.
 * \value UpdateResolverEndpointAction Route53Resolver UpdateResolverEndpoint action.
 * \value UpdateResolverRuleAction Route53Resolver UpdateResolverRule action.
 */

/*!
 * Constructs a Route53ResolverRequest object for Route53Resolver \a action.
 */
Route53ResolverRequest::Route53ResolverRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new Route53ResolverRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
Route53ResolverRequest::Route53ResolverRequest(const Route53ResolverRequest &other)
    : QtAws::Core::AwsAbstractRequest(new Route53ResolverRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the Route53ResolverRequest object to be equal to \a other.
 */
Route53ResolverRequest& Route53ResolverRequest::operator=(const Route53ResolverRequest &other)
{
    Q_D(Route53ResolverRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa Route53ResolverRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Route53ResolverRequestPrivate.
 */
Route53ResolverRequest::Route53ResolverRequest(Route53ResolverRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Route53Resolver action to be performed by this request.
 */
Route53ResolverRequest::Action Route53ResolverRequest::action() const
{
    Q_D(const Route53ResolverRequest);
    return d->action;
}

/*!
 * Returns the name of the Route53Resolver action to be performed by this request.
 */
QString Route53ResolverRequest::actionString() const
{
    return Route53ResolverRequestPrivate::toString(action());
}

/*!
 * Returns the Route53Resolver API version implemented by this request.
 */
QString Route53ResolverRequest::apiVersion() const
{
    Q_D(const Route53ResolverRequest);
    return d->apiVersion;
}

/*!
 * Sets the Route53Resolver action to be performed by this request to \a action.
 */
void Route53ResolverRequest::setAction(const Action action)
{
    Q_D(Route53ResolverRequest);
    d->action = action;
}

/*!
 * Sets the Route53Resolver API version to include in this request to \a version.
 */
void Route53ResolverRequest::setApiVersion(const QString &version)
{
    Q_D(Route53ResolverRequest);
    d->apiVersion = version;
}

/*!
 * Returns \c true if this request is equal to \a other; \c false otherwise.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 */
bool Route53ResolverRequest::operator==(const Route53ResolverRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Route53Resolver queue name.
 *
 * @par From Route53Resolver FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Route53Resolver queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool Route53ResolverRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int Route53ResolverRequest::clearParameter(const QString &name)
{
    Q_D(Route53ResolverRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void Route53ResolverRequest::clearParameters()
{
    Q_D(Route53ResolverRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant Route53ResolverRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const Route53ResolverRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &Route53ResolverRequest::parameters() const
{
    Q_D(const Route53ResolverRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void Route53ResolverRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(Route53ResolverRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void Route53ResolverRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(Route53ResolverRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Route53Resolver request using the given
 * \a endpoint.
 *
 * This Route53Resolver implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest Route53ResolverRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const Route53ResolverRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Route53Resolver::Route53ResolverRequestPrivate
 * \brief The Route53ResolverRequestPrivate class provides private implementation for Route53ResolverRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Resolver
 */

/*!
 * Constructs a Route53ResolverRequestPrivate object for Route53Resolver \a action,
 * with public implementation \a q.
 */
Route53ResolverRequestPrivate::Route53ResolverRequestPrivate(const Route53ResolverRequest::Action action, Route53ResolverRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2018-04-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the Route53ResolverRequest class's copy constructor.
 */
Route53ResolverRequestPrivate::Route53ResolverRequestPrivate(const Route53ResolverRequestPrivate &other,
                                     Route53ResolverRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts Route53ResolverRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Route53Resolver service's Action
 * query parameters.
 */
QString Route53ResolverRequestPrivate::toString(const Route53ResolverRequest::Action &action)
{
    #define ActionToString(action) \
        case Route53ResolverRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateFirewallRuleGroup);
        ActionToString(AssociateResolverEndpointIpAddress);
        ActionToString(AssociateResolverQueryLogConfig);
        ActionToString(AssociateResolverRule);
        ActionToString(CreateFirewallDomainList);
        ActionToString(CreateFirewallRule);
        ActionToString(CreateFirewallRuleGroup);
        ActionToString(CreateResolverEndpoint);
        ActionToString(CreateResolverQueryLogConfig);
        ActionToString(CreateResolverRule);
        ActionToString(DeleteFirewallDomainList);
        ActionToString(DeleteFirewallRule);
        ActionToString(DeleteFirewallRuleGroup);
        ActionToString(DeleteResolverEndpoint);
        ActionToString(DeleteResolverQueryLogConfig);
        ActionToString(DeleteResolverRule);
        ActionToString(DisassociateFirewallRuleGroup);
        ActionToString(DisassociateResolverEndpointIpAddress);
        ActionToString(DisassociateResolverQueryLogConfig);
        ActionToString(DisassociateResolverRule);
        ActionToString(GetFirewallConfig);
        ActionToString(GetFirewallDomainList);
        ActionToString(GetFirewallRuleGroup);
        ActionToString(GetFirewallRuleGroupAssociation);
        ActionToString(GetFirewallRuleGroupPolicy);
        ActionToString(GetResolverConfig);
        ActionToString(GetResolverDnssecConfig);
        ActionToString(GetResolverEndpoint);
        ActionToString(GetResolverQueryLogConfig);
        ActionToString(GetResolverQueryLogConfigAssociation);
        ActionToString(GetResolverQueryLogConfigPolicy);
        ActionToString(GetResolverRule);
        ActionToString(GetResolverRuleAssociation);
        ActionToString(GetResolverRulePolicy);
        ActionToString(ImportFirewallDomains);
        ActionToString(ListFirewallConfigs);
        ActionToString(ListFirewallDomainLists);
        ActionToString(ListFirewallDomains);
        ActionToString(ListFirewallRuleGroupAssociations);
        ActionToString(ListFirewallRuleGroups);
        ActionToString(ListFirewallRules);
        ActionToString(ListResolverConfigs);
        ActionToString(ListResolverDnssecConfigs);
        ActionToString(ListResolverEndpointIpAddresses);
        ActionToString(ListResolverEndpoints);
        ActionToString(ListResolverQueryLogConfigAssociations);
        ActionToString(ListResolverQueryLogConfigs);
        ActionToString(ListResolverRuleAssociations);
        ActionToString(ListResolverRules);
        ActionToString(ListTagsForResource);
        ActionToString(PutFirewallRuleGroupPolicy);
        ActionToString(PutResolverQueryLogConfigPolicy);
        ActionToString(PutResolverRulePolicy);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateFirewallConfig);
        ActionToString(UpdateFirewallDomains);
        ActionToString(UpdateFirewallRule);
        ActionToString(UpdateFirewallRuleGroupAssociation);
        ActionToString(UpdateResolverConfig);
        ActionToString(UpdateResolverDnssecConfig);
        ActionToString(UpdateResolverEndpoint);
        ActionToString(UpdateResolverRule);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Route53Resolver
} // namespace QtAws
