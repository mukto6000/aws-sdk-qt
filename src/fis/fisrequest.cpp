// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "fisrequest.h"
#include "fisrequest_p.h"

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::FisRequest
 * \brief The FisRequest class provides an interface for Fis requests.
 *
 * \inmodule QtAwsFis
 */

/*!
 * \enum FisRequest::Action
 *
 * This enum describes the actions that can be performed as Fis
 * requests.
 *
 * \value CreateExperimentTemplateAction Fis CreateExperimentTemplate action.
 * \value DeleteExperimentTemplateAction Fis DeleteExperimentTemplate action.
 * \value GetActionAction Fis GetAction action.
 * \value GetExperimentAction Fis GetExperiment action.
 * \value GetExperimentTemplateAction Fis GetExperimentTemplate action.
 * \value GetTargetResourceTypeAction Fis GetTargetResourceType action.
 * \value ListActionsAction Fis ListActions action.
 * \value ListExperimentTemplatesAction Fis ListExperimentTemplates action.
 * \value ListExperimentsAction Fis ListExperiments action.
 * \value ListTagsForResourceAction Fis ListTagsForResource action.
 * \value ListTargetResourceTypesAction Fis ListTargetResourceTypes action.
 * \value StartExperimentAction Fis StartExperiment action.
 * \value StopExperimentAction Fis StopExperiment action.
 * \value TagResourceAction Fis TagResource action.
 * \value UntagResourceAction Fis UntagResource action.
 * \value UpdateExperimentTemplateAction Fis UpdateExperimentTemplate action.
 */

/*!
 * Constructs a FisRequest object for Fis \a action.
 */
FisRequest::FisRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new FisRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
FisRequest::FisRequest(const FisRequest &other)
    : QtAws::Core::AwsAbstractRequest(new FisRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the FisRequest object to be equal to \a other.
 */
FisRequest& FisRequest::operator=(const FisRequest &other)
{
    Q_D(FisRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa FisRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from FisRequestPrivate.
 */
FisRequest::FisRequest(FisRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Fis action to be performed by this request.
 */
FisRequest::Action FisRequest::action() const
{
    Q_D(const FisRequest);
    return d->action;
}

/*!
 * Returns the name of the Fis action to be performed by this request.
 */
QString FisRequest::actionString() const
{
    return FisRequestPrivate::toString(action());
}

/*!
 * Returns the Fis API version implemented by this request.
 */
QString FisRequest::apiVersion() const
{
    Q_D(const FisRequest);
    return d->apiVersion;
}

/*!
 * Sets the Fis action to be performed by this request to \a action.
 */
void FisRequest::setAction(const Action action)
{
    Q_D(FisRequest);
    d->action = action;
}

/*!
 * Sets the Fis API version to include in this request to \a version.
 */
void FisRequest::setApiVersion(const QString &version)
{
    Q_D(FisRequest);
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
bool FisRequest::operator==(const FisRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Fis queue name.
 *
 * @par From Fis FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Fis queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool FisRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int FisRequest::clearParameter(const QString &name)
{
    Q_D(FisRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void FisRequest::clearParameters()
{
    Q_D(FisRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant FisRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const FisRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &FisRequest::parameters() const
{
    Q_D(const FisRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void FisRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(FisRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void FisRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(FisRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Fis request using the given
 * \a endpoint.
 *
 * This Fis implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest FisRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const FisRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Fis::FisRequestPrivate
 * \brief The FisRequestPrivate class provides private implementation for FisRequest.
 * \internal
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a FisRequestPrivate object for Fis \a action,
 * with public implementation \a q.
 */
FisRequestPrivate::FisRequestPrivate(const FisRequest::Action action, FisRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-12-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the FisRequest class's copy constructor.
 */
FisRequestPrivate::FisRequestPrivate(const FisRequestPrivate &other,
                                     FisRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts FisRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Fis service's Action
 * query parameters.
 */
QString FisRequestPrivate::toString(const FisRequest::Action &action)
{
    #define ActionToString(action) \
        case FisRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateExperimentTemplate);
        ActionToString(DeleteExperimentTemplate);
        ActionToString(GetAction);
        ActionToString(GetExperiment);
        ActionToString(GetExperimentTemplate);
        ActionToString(GetTargetResourceType);
        ActionToString(ListActions);
        ActionToString(ListExperimentTemplates);
        ActionToString(ListExperiments);
        ActionToString(ListTagsForResource);
        ActionToString(ListTargetResourceTypes);
        ActionToString(StartExperiment);
        ActionToString(StopExperiment);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateExperimentTemplate);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Fis
} // namespace QtAws
