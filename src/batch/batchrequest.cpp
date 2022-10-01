// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchrequest.h"
#include "batchrequest_p.h"

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::BatchRequest
 * \brief The BatchRequest class provides an interface for Batch requests.
 *
 * \inmodule QtAwsBatch
 */

/*!
 * \enum BatchRequest::Action
 *
 * This enum describes the actions that can be performed as Batch
 * requests.
 *
 * \value CancelJobAction Batch CancelJob action.
 * \value CreateComputeEnvironmentAction Batch CreateComputeEnvironment action.
 * \value CreateJobQueueAction Batch CreateJobQueue action.
 * \value CreateSchedulingPolicyAction Batch CreateSchedulingPolicy action.
 * \value DeleteComputeEnvironmentAction Batch DeleteComputeEnvironment action.
 * \value DeleteJobQueueAction Batch DeleteJobQueue action.
 * \value DeleteSchedulingPolicyAction Batch DeleteSchedulingPolicy action.
 * \value DeregisterJobDefinitionAction Batch DeregisterJobDefinition action.
 * \value DescribeComputeEnvironmentsAction Batch DescribeComputeEnvironments action.
 * \value DescribeJobDefinitionsAction Batch DescribeJobDefinitions action.
 * \value DescribeJobQueuesAction Batch DescribeJobQueues action.
 * \value DescribeJobsAction Batch DescribeJobs action.
 * \value DescribeSchedulingPoliciesAction Batch DescribeSchedulingPolicies action.
 * \value ListJobsAction Batch ListJobs action.
 * \value ListSchedulingPoliciesAction Batch ListSchedulingPolicies action.
 * \value ListTagsForResourceAction Batch ListTagsForResource action.
 * \value RegisterJobDefinitionAction Batch RegisterJobDefinition action.
 * \value SubmitJobAction Batch SubmitJob action.
 * \value TagResourceAction Batch TagResource action.
 * \value TerminateJobAction Batch TerminateJob action.
 * \value UntagResourceAction Batch UntagResource action.
 * \value UpdateComputeEnvironmentAction Batch UpdateComputeEnvironment action.
 * \value UpdateJobQueueAction Batch UpdateJobQueue action.
 * \value UpdateSchedulingPolicyAction Batch UpdateSchedulingPolicy action.
 */

/*!
 * Constructs a BatchRequest object for Batch \a action.
 */
BatchRequest::BatchRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new BatchRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
BatchRequest::BatchRequest(const BatchRequest &other)
    : QtAws::Core::AwsAbstractRequest(new BatchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the BatchRequest object to be equal to \a other.
 */
BatchRequest& BatchRequest::operator=(const BatchRequest &other)
{
    Q_D(BatchRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa BatchRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from BatchRequestPrivate.
 */
BatchRequest::BatchRequest(BatchRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Batch action to be performed by this request.
 */
BatchRequest::Action BatchRequest::action() const
{
    Q_D(const BatchRequest);
    return d->action;
}

/*!
 * Returns the name of the Batch action to be performed by this request.
 */
QString BatchRequest::actionString() const
{
    return BatchRequestPrivate::toString(action());
}

/*!
 * Returns the Batch API version implemented by this request.
 */
QString BatchRequest::apiVersion() const
{
    Q_D(const BatchRequest);
    return d->apiVersion;
}

/*!
 * Sets the Batch action to be performed by this request to \a action.
 */
void BatchRequest::setAction(const Action action)
{
    Q_D(BatchRequest);
    d->action = action;
}

/*!
 * Sets the Batch API version to include in this request to \a version.
 */
void BatchRequest::setApiVersion(const QString &version)
{
    Q_D(BatchRequest);
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
bool BatchRequest::operator==(const BatchRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Batch queue name.
 *
 * @par From Batch FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Batch queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool BatchRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int BatchRequest::clearParameter(const QString &name)
{
    Q_D(BatchRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void BatchRequest::clearParameters()
{
    Q_D(BatchRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant BatchRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const BatchRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &BatchRequest::parameters() const
{
    Q_D(const BatchRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void BatchRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(BatchRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void BatchRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(BatchRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Batch request using the given
 * \a endpoint.
 *
 * This Batch implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest BatchRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const BatchRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Batch::BatchRequestPrivate
 * \brief The BatchRequestPrivate class provides private implementation for BatchRequest.
 * \internal
 *
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a BatchRequestPrivate object for Batch \a action,
 * with public implementation \a q.
 */
BatchRequestPrivate::BatchRequestPrivate(const BatchRequest::Action action, BatchRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2016-08-10"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the BatchRequest class's copy constructor.
 */
BatchRequestPrivate::BatchRequestPrivate(const BatchRequestPrivate &other,
                                     BatchRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts BatchRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Batch service's Action
 * query parameters.
 */
QString BatchRequestPrivate::toString(const BatchRequest::Action &action)
{
    #define ActionToString(action) \
        case BatchRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CancelJob);
        ActionToString(CreateComputeEnvironment);
        ActionToString(CreateJobQueue);
        ActionToString(CreateSchedulingPolicy);
        ActionToString(DeleteComputeEnvironment);
        ActionToString(DeleteJobQueue);
        ActionToString(DeleteSchedulingPolicy);
        ActionToString(DeregisterJobDefinition);
        ActionToString(DescribeComputeEnvironments);
        ActionToString(DescribeJobDefinitions);
        ActionToString(DescribeJobQueues);
        ActionToString(DescribeJobs);
        ActionToString(DescribeSchedulingPolicies);
        ActionToString(ListJobs);
        ActionToString(ListSchedulingPolicies);
        ActionToString(ListTagsForResource);
        ActionToString(RegisterJobDefinition);
        ActionToString(SubmitJob);
        ActionToString(TagResource);
        ActionToString(TerminateJob);
        ActionToString(UntagResource);
        ActionToString(UpdateComputeEnvironment);
        ActionToString(UpdateJobQueue);
        ActionToString(UpdateSchedulingPolicy);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Batch
} // namespace QtAws
