// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "chimesdkmediapipelinesrequest.h"
#include "chimesdkmediapipelinesrequest_p.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

/*!
 * \class QtAws::ChimeSdkMediaPipelines::ChimeSdkMediaPipelinesRequest
 * \brief The ChimeSdkMediaPipelinesRequest class provides an interface for ChimeSdkMediaPipelines requests.
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 */

/*!
 * \enum ChimeSdkMediaPipelinesRequest::Action
 *
 * This enum describes the actions that can be performed as ChimeSdkMediaPipelines
 * requests.
 *
 * \value CreateMediaCapturePipelineAction ChimeSdkMediaPipelines CreateMediaCapturePipeline action.
 * \value CreateMediaConcatenationPipelineAction ChimeSdkMediaPipelines CreateMediaConcatenationPipeline action.
 * \value CreateMediaLiveConnectorPipelineAction ChimeSdkMediaPipelines CreateMediaLiveConnectorPipeline action.
 * \value DeleteMediaCapturePipelineAction ChimeSdkMediaPipelines DeleteMediaCapturePipeline action.
 * \value DeleteMediaPipelineAction ChimeSdkMediaPipelines DeleteMediaPipeline action.
 * \value GetMediaCapturePipelineAction ChimeSdkMediaPipelines GetMediaCapturePipeline action.
 * \value GetMediaPipelineAction ChimeSdkMediaPipelines GetMediaPipeline action.
 * \value ListMediaCapturePipelinesAction ChimeSdkMediaPipelines ListMediaCapturePipelines action.
 * \value ListMediaPipelinesAction ChimeSdkMediaPipelines ListMediaPipelines action.
 * \value ListTagsForResourceAction ChimeSdkMediaPipelines ListTagsForResource action.
 * \value TagResourceAction ChimeSdkMediaPipelines TagResource action.
 * \value UntagResourceAction ChimeSdkMediaPipelines UntagResource action.
 */

/*!
 * Constructs a ChimeSdkMediaPipelinesRequest object for ChimeSdkMediaPipelines \a action.
 */
ChimeSdkMediaPipelinesRequest::ChimeSdkMediaPipelinesRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ChimeSdkMediaPipelinesRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ChimeSdkMediaPipelinesRequest::ChimeSdkMediaPipelinesRequest(const ChimeSdkMediaPipelinesRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ChimeSdkMediaPipelinesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ChimeSdkMediaPipelinesRequest object to be equal to \a other.
 */
ChimeSdkMediaPipelinesRequest& ChimeSdkMediaPipelinesRequest::operator=(const ChimeSdkMediaPipelinesRequest &other)
{
    Q_D(ChimeSdkMediaPipelinesRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ChimeSdkMediaPipelinesRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ChimeSdkMediaPipelinesRequestPrivate.
 */
ChimeSdkMediaPipelinesRequest::ChimeSdkMediaPipelinesRequest(ChimeSdkMediaPipelinesRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ChimeSdkMediaPipelines action to be performed by this request.
 */
ChimeSdkMediaPipelinesRequest::Action ChimeSdkMediaPipelinesRequest::action() const
{
    Q_D(const ChimeSdkMediaPipelinesRequest);
    return d->action;
}

/*!
 * Returns the name of the ChimeSdkMediaPipelines action to be performed by this request.
 */
QString ChimeSdkMediaPipelinesRequest::actionString() const
{
    return ChimeSdkMediaPipelinesRequestPrivate::toString(action());
}

/*!
 * Returns the ChimeSdkMediaPipelines API version implemented by this request.
 */
QString ChimeSdkMediaPipelinesRequest::apiVersion() const
{
    Q_D(const ChimeSdkMediaPipelinesRequest);
    return d->apiVersion;
}

/*!
 * Sets the ChimeSdkMediaPipelines action to be performed by this request to \a action.
 */
void ChimeSdkMediaPipelinesRequest::setAction(const Action action)
{
    Q_D(ChimeSdkMediaPipelinesRequest);
    d->action = action;
}

/*!
 * Sets the ChimeSdkMediaPipelines API version to include in this request to \a version.
 */
void ChimeSdkMediaPipelinesRequest::setApiVersion(const QString &version)
{
    Q_D(ChimeSdkMediaPipelinesRequest);
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
bool ChimeSdkMediaPipelinesRequest::operator==(const ChimeSdkMediaPipelinesRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ChimeSdkMediaPipelines queue name.
 *
 * @par From ChimeSdkMediaPipelines FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ChimeSdkMediaPipelines queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ChimeSdkMediaPipelinesRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ChimeSdkMediaPipelinesRequest::clearParameter(const QString &name)
{
    Q_D(ChimeSdkMediaPipelinesRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ChimeSdkMediaPipelinesRequest::clearParameters()
{
    Q_D(ChimeSdkMediaPipelinesRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ChimeSdkMediaPipelinesRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ChimeSdkMediaPipelinesRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ChimeSdkMediaPipelinesRequest::parameters() const
{
    Q_D(const ChimeSdkMediaPipelinesRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ChimeSdkMediaPipelinesRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ChimeSdkMediaPipelinesRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ChimeSdkMediaPipelinesRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ChimeSdkMediaPipelinesRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ChimeSdkMediaPipelines request using the given
 * \a endpoint.
 *
 * This ChimeSdkMediaPipelines implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ChimeSdkMediaPipelinesRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ChimeSdkMediaPipelinesRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ChimeSdkMediaPipelines::ChimeSdkMediaPipelinesRequestPrivate
 * \brief The ChimeSdkMediaPipelinesRequestPrivate class provides private implementation for ChimeSdkMediaPipelinesRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 */

/*!
 * Constructs a ChimeSdkMediaPipelinesRequestPrivate object for ChimeSdkMediaPipelines \a action,
 * with public implementation \a q.
 */
ChimeSdkMediaPipelinesRequestPrivate::ChimeSdkMediaPipelinesRequestPrivate(const ChimeSdkMediaPipelinesRequest::Action action, ChimeSdkMediaPipelinesRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2021-07-15"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ChimeSdkMediaPipelinesRequest class's copy constructor.
 */
ChimeSdkMediaPipelinesRequestPrivate::ChimeSdkMediaPipelinesRequestPrivate(const ChimeSdkMediaPipelinesRequestPrivate &other,
                                     ChimeSdkMediaPipelinesRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ChimeSdkMediaPipelinesRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ChimeSdkMediaPipelines service's Action
 * query parameters.
 */
QString ChimeSdkMediaPipelinesRequestPrivate::toString(const ChimeSdkMediaPipelinesRequest::Action &action)
{
    #define ActionToString(action) \
        case ChimeSdkMediaPipelinesRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateMediaCapturePipeline);
        ActionToString(CreateMediaConcatenationPipeline);
        ActionToString(CreateMediaLiveConnectorPipeline);
        ActionToString(DeleteMediaCapturePipeline);
        ActionToString(DeleteMediaPipeline);
        ActionToString(GetMediaCapturePipeline);
        ActionToString(GetMediaPipeline);
        ActionToString(ListMediaCapturePipelines);
        ActionToString(ListMediaPipelines);
        ActionToString(ListTagsForResource);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws
