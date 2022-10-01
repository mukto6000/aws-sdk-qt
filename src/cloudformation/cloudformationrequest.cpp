// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cloudformationrequest.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::CloudFormationRequest
 * \brief The CloudFormationRequest class provides an interface for CloudFormation requests.
 *
 * \inmodule QtAwsCloudFormation
 */

/*!
 * \enum CloudFormationRequest::Action
 *
 * This enum describes the actions that can be performed as CloudFormation
 * requests.
 *
 * \value ActivateTypeAction CloudFormation ActivateType action.
 * \value BatchDescribeTypeConfigurationsAction CloudFormation BatchDescribeTypeConfigurations action.
 * \value CancelUpdateStackAction CloudFormation CancelUpdateStack action.
 * \value ContinueUpdateRollbackAction CloudFormation ContinueUpdateRollback action.
 * \value CreateChangeSetAction CloudFormation CreateChangeSet action.
 * \value CreateStackAction CloudFormation CreateStack action.
 * \value CreateStackInstancesAction CloudFormation CreateStackInstances action.
 * \value CreateStackSetAction CloudFormation CreateStackSet action.
 * \value DeactivateTypeAction CloudFormation DeactivateType action.
 * \value DeleteChangeSetAction CloudFormation DeleteChangeSet action.
 * \value DeleteStackAction CloudFormation DeleteStack action.
 * \value DeleteStackInstancesAction CloudFormation DeleteStackInstances action.
 * \value DeleteStackSetAction CloudFormation DeleteStackSet action.
 * \value DeregisterTypeAction CloudFormation DeregisterType action.
 * \value DescribeAccountLimitsAction CloudFormation DescribeAccountLimits action.
 * \value DescribeChangeSetAction CloudFormation DescribeChangeSet action.
 * \value DescribeChangeSetHooksAction CloudFormation DescribeChangeSetHooks action.
 * \value DescribePublisherAction CloudFormation DescribePublisher action.
 * \value DescribeStackDriftDetectionStatusAction CloudFormation DescribeStackDriftDetectionStatus action.
 * \value DescribeStackEventsAction CloudFormation DescribeStackEvents action.
 * \value DescribeStackInstanceAction CloudFormation DescribeStackInstance action.
 * \value DescribeStackResourceAction CloudFormation DescribeStackResource action.
 * \value DescribeStackResourceDriftsAction CloudFormation DescribeStackResourceDrifts action.
 * \value DescribeStackResourcesAction CloudFormation DescribeStackResources action.
 * \value DescribeStackSetAction CloudFormation DescribeStackSet action.
 * \value DescribeStackSetOperationAction CloudFormation DescribeStackSetOperation action.
 * \value DescribeStacksAction CloudFormation DescribeStacks action.
 * \value DescribeTypeAction CloudFormation DescribeType action.
 * \value DescribeTypeRegistrationAction CloudFormation DescribeTypeRegistration action.
 * \value DetectStackDriftAction CloudFormation DetectStackDrift action.
 * \value DetectStackResourceDriftAction CloudFormation DetectStackResourceDrift action.
 * \value DetectStackSetDriftAction CloudFormation DetectStackSetDrift action.
 * \value EstimateTemplateCostAction CloudFormation EstimateTemplateCost action.
 * \value ExecuteChangeSetAction CloudFormation ExecuteChangeSet action.
 * \value GetStackPolicyAction CloudFormation GetStackPolicy action.
 * \value GetTemplateAction CloudFormation GetTemplate action.
 * \value GetTemplateSummaryAction CloudFormation GetTemplateSummary action.
 * \value ImportStacksToStackSetAction CloudFormation ImportStacksToStackSet action.
 * \value ListChangeSetsAction CloudFormation ListChangeSets action.
 * \value ListExportsAction CloudFormation ListExports action.
 * \value ListImportsAction CloudFormation ListImports action.
 * \value ListStackInstancesAction CloudFormation ListStackInstances action.
 * \value ListStackResourcesAction CloudFormation ListStackResources action.
 * \value ListStackSetOperationResultsAction CloudFormation ListStackSetOperationResults action.
 * \value ListStackSetOperationsAction CloudFormation ListStackSetOperations action.
 * \value ListStackSetsAction CloudFormation ListStackSets action.
 * \value ListStacksAction CloudFormation ListStacks action.
 * \value ListTypeRegistrationsAction CloudFormation ListTypeRegistrations action.
 * \value ListTypeVersionsAction CloudFormation ListTypeVersions action.
 * \value ListTypesAction CloudFormation ListTypes action.
 * \value PublishTypeAction CloudFormation PublishType action.
 * \value RecordHandlerProgressAction CloudFormation RecordHandlerProgress action.
 * \value RegisterPublisherAction CloudFormation RegisterPublisher action.
 * \value RegisterTypeAction CloudFormation RegisterType action.
 * \value RollbackStackAction CloudFormation RollbackStack action.
 * \value SetStackPolicyAction CloudFormation SetStackPolicy action.
 * \value SetTypeConfigurationAction CloudFormation SetTypeConfiguration action.
 * \value SetTypeDefaultVersionAction CloudFormation SetTypeDefaultVersion action.
 * \value SignalResourceAction CloudFormation SignalResource action.
 * \value StopStackSetOperationAction CloudFormation StopStackSetOperation action.
 * \value TestTypeAction CloudFormation TestType action.
 * \value UpdateStackAction CloudFormation UpdateStack action.
 * \value UpdateStackInstancesAction CloudFormation UpdateStackInstances action.
 * \value UpdateStackSetAction CloudFormation UpdateStackSet action.
 * \value UpdateTerminationProtectionAction CloudFormation UpdateTerminationProtection action.
 * \value ValidateTemplateAction CloudFormation ValidateTemplate action.
 */

/*!
 * Constructs a CloudFormationRequest object for CloudFormation \a action.
 */
CloudFormationRequest::CloudFormationRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new CloudFormationRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
CloudFormationRequest::CloudFormationRequest(const CloudFormationRequest &other)
    : QtAws::Core::AwsAbstractRequest(new CloudFormationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the CloudFormationRequest object to be equal to \a other.
 */
CloudFormationRequest& CloudFormationRequest::operator=(const CloudFormationRequest &other)
{
    Q_D(CloudFormationRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa CloudFormationRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudFormationRequestPrivate.
 */
CloudFormationRequest::CloudFormationRequest(CloudFormationRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the CloudFormation action to be performed by this request.
 */
CloudFormationRequest::Action CloudFormationRequest::action() const
{
    Q_D(const CloudFormationRequest);
    return d->action;
}

/*!
 * Returns the name of the CloudFormation action to be performed by this request.
 */
QString CloudFormationRequest::actionString() const
{
    return CloudFormationRequestPrivate::toString(action());
}

/*!
 * Returns the CloudFormation API version implemented by this request.
 */
QString CloudFormationRequest::apiVersion() const
{
    Q_D(const CloudFormationRequest);
    return d->apiVersion;
}

/*!
 * Sets the CloudFormation action to be performed by this request to \a action.
 */
void CloudFormationRequest::setAction(const Action action)
{
    Q_D(CloudFormationRequest);
    d->action = action;
}

/*!
 * Sets the CloudFormation API version to include in this request to \a version.
 */
void CloudFormationRequest::setApiVersion(const QString &version)
{
    Q_D(CloudFormationRequest);
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
bool CloudFormationRequest::operator==(const CloudFormationRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid CloudFormation queue name.
 *
 * @par From CloudFormation FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CloudFormation queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool CloudFormationRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int CloudFormationRequest::clearParameter(const QString &name)
{
    Q_D(CloudFormationRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void CloudFormationRequest::clearParameters()
{
    Q_D(CloudFormationRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant CloudFormationRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CloudFormationRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &CloudFormationRequest::parameters() const
{
    Q_D(const CloudFormationRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void CloudFormationRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CloudFormationRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void CloudFormationRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CloudFormationRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the CloudFormation request using the given
 * \a endpoint.
 *
 * This CloudFormation implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest CloudFormationRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const CloudFormationRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::CloudFormation::CloudFormationRequestPrivate
 * \brief The CloudFormationRequestPrivate class provides private implementation for CloudFormationRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFormation
 */

/*!
 * Constructs a CloudFormationRequestPrivate object for CloudFormation \a action,
 * with public implementation \a q.
 */
CloudFormationRequestPrivate::CloudFormationRequestPrivate(const CloudFormationRequest::Action action, CloudFormationRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2010-05-15"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CloudFormationRequest class's copy constructor.
 */
CloudFormationRequestPrivate::CloudFormationRequestPrivate(const CloudFormationRequestPrivate &other,
                                     CloudFormationRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts CloudFormationRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CloudFormation service's Action
 * query parameters.
 */
QString CloudFormationRequestPrivate::toString(const CloudFormationRequest::Action &action)
{
    #define ActionToString(action) \
        case CloudFormationRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(ActivateType);
        ActionToString(BatchDescribeTypeConfigurations);
        ActionToString(CancelUpdateStack);
        ActionToString(ContinueUpdateRollback);
        ActionToString(CreateChangeSet);
        ActionToString(CreateStack);
        ActionToString(CreateStackInstances);
        ActionToString(CreateStackSet);
        ActionToString(DeactivateType);
        ActionToString(DeleteChangeSet);
        ActionToString(DeleteStack);
        ActionToString(DeleteStackInstances);
        ActionToString(DeleteStackSet);
        ActionToString(DeregisterType);
        ActionToString(DescribeAccountLimits);
        ActionToString(DescribeChangeSet);
        ActionToString(DescribeChangeSetHooks);
        ActionToString(DescribePublisher);
        ActionToString(DescribeStackDriftDetectionStatus);
        ActionToString(DescribeStackEvents);
        ActionToString(DescribeStackInstance);
        ActionToString(DescribeStackResource);
        ActionToString(DescribeStackResourceDrifts);
        ActionToString(DescribeStackResources);
        ActionToString(DescribeStackSet);
        ActionToString(DescribeStackSetOperation);
        ActionToString(DescribeStacks);
        ActionToString(DescribeType);
        ActionToString(DescribeTypeRegistration);
        ActionToString(DetectStackDrift);
        ActionToString(DetectStackResourceDrift);
        ActionToString(DetectStackSetDrift);
        ActionToString(EstimateTemplateCost);
        ActionToString(ExecuteChangeSet);
        ActionToString(GetStackPolicy);
        ActionToString(GetTemplate);
        ActionToString(GetTemplateSummary);
        ActionToString(ImportStacksToStackSet);
        ActionToString(ListChangeSets);
        ActionToString(ListExports);
        ActionToString(ListImports);
        ActionToString(ListStackInstances);
        ActionToString(ListStackResources);
        ActionToString(ListStackSetOperationResults);
        ActionToString(ListStackSetOperations);
        ActionToString(ListStackSets);
        ActionToString(ListStacks);
        ActionToString(ListTypeRegistrations);
        ActionToString(ListTypeVersions);
        ActionToString(ListTypes);
        ActionToString(PublishType);
        ActionToString(RecordHandlerProgress);
        ActionToString(RegisterPublisher);
        ActionToString(RegisterType);
        ActionToString(RollbackStack);
        ActionToString(SetStackPolicy);
        ActionToString(SetTypeConfiguration);
        ActionToString(SetTypeDefaultVersion);
        ActionToString(SignalResource);
        ActionToString(StopStackSetOperation);
        ActionToString(TestType);
        ActionToString(UpdateStack);
        ActionToString(UpdateStackInstances);
        ActionToString(UpdateStackSet);
        ActionToString(UpdateTerminationProtection);
        ActionToString(ValidateTemplate);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CloudFormation
} // namespace QtAws
