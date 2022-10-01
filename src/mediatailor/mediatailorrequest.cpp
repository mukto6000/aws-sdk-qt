/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "mediatailorrequest.h"
#include "mediatailorrequest_p.h"

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::MediaTailorRequest
 * \brief The MediaTailorRequest class provides an interface for MediaTailor requests.
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * \enum MediaTailorRequest::Action
 *
 * This enum describes the actions that can be performed as MediaTailor
 * requests.
 *
 * \value ConfigureLogsForPlaybackConfigurationAction MediaTailor ConfigureLogsForPlaybackConfiguration action.
 * \value CreateChannelAction MediaTailor CreateChannel action.
 * \value CreateLiveSourceAction MediaTailor CreateLiveSource action.
 * \value CreatePrefetchScheduleAction MediaTailor CreatePrefetchSchedule action.
 * \value CreateProgramAction MediaTailor CreateProgram action.
 * \value CreateSourceLocationAction MediaTailor CreateSourceLocation action.
 * \value CreateVodSourceAction MediaTailor CreateVodSource action.
 * \value DeleteChannelAction MediaTailor DeleteChannel action.
 * \value DeleteChannelPolicyAction MediaTailor DeleteChannelPolicy action.
 * \value DeleteLiveSourceAction MediaTailor DeleteLiveSource action.
 * \value DeletePlaybackConfigurationAction MediaTailor DeletePlaybackConfiguration action.
 * \value DeletePrefetchScheduleAction MediaTailor DeletePrefetchSchedule action.
 * \value DeleteProgramAction MediaTailor DeleteProgram action.
 * \value DeleteSourceLocationAction MediaTailor DeleteSourceLocation action.
 * \value DeleteVodSourceAction MediaTailor DeleteVodSource action.
 * \value DescribeChannelAction MediaTailor DescribeChannel action.
 * \value DescribeLiveSourceAction MediaTailor DescribeLiveSource action.
 * \value DescribeProgramAction MediaTailor DescribeProgram action.
 * \value DescribeSourceLocationAction MediaTailor DescribeSourceLocation action.
 * \value DescribeVodSourceAction MediaTailor DescribeVodSource action.
 * \value GetChannelPolicyAction MediaTailor GetChannelPolicy action.
 * \value GetChannelScheduleAction MediaTailor GetChannelSchedule action.
 * \value GetPlaybackConfigurationAction MediaTailor GetPlaybackConfiguration action.
 * \value GetPrefetchScheduleAction MediaTailor GetPrefetchSchedule action.
 * \value ListAlertsAction MediaTailor ListAlerts action.
 * \value ListChannelsAction MediaTailor ListChannels action.
 * \value ListLiveSourcesAction MediaTailor ListLiveSources action.
 * \value ListPlaybackConfigurationsAction MediaTailor ListPlaybackConfigurations action.
 * \value ListPrefetchSchedulesAction MediaTailor ListPrefetchSchedules action.
 * \value ListSourceLocationsAction MediaTailor ListSourceLocations action.
 * \value ListTagsForResourceAction MediaTailor ListTagsForResource action.
 * \value ListVodSourcesAction MediaTailor ListVodSources action.
 * \value PutChannelPolicyAction MediaTailor PutChannelPolicy action.
 * \value PutPlaybackConfigurationAction MediaTailor PutPlaybackConfiguration action.
 * \value StartChannelAction MediaTailor StartChannel action.
 * \value StopChannelAction MediaTailor StopChannel action.
 * \value TagResourceAction MediaTailor TagResource action.
 * \value UntagResourceAction MediaTailor UntagResource action.
 * \value UpdateChannelAction MediaTailor UpdateChannel action.
 * \value UpdateLiveSourceAction MediaTailor UpdateLiveSource action.
 * \value UpdateSourceLocationAction MediaTailor UpdateSourceLocation action.
 * \value UpdateVodSourceAction MediaTailor UpdateVodSource action.
 */

/*!
 * Constructs a MediaTailorRequest object for MediaTailor \a action.
 */
MediaTailorRequest::MediaTailorRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new MediaTailorRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
MediaTailorRequest::MediaTailorRequest(const MediaTailorRequest &other)
    : QtAws::Core::AwsAbstractRequest(new MediaTailorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the MediaTailorRequest object to be equal to \a other.
 */
MediaTailorRequest& MediaTailorRequest::operator=(const MediaTailorRequest &other)
{
    Q_D(MediaTailorRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa MediaTailorRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MediaTailorRequestPrivate.
 */
MediaTailorRequest::MediaTailorRequest(MediaTailorRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the MediaTailor action to be performed by this request.
 */
MediaTailorRequest::Action MediaTailorRequest::action() const
{
    Q_D(const MediaTailorRequest);
    return d->action;
}

/*!
 * Returns the name of the MediaTailor action to be performed by this request.
 */
QString MediaTailorRequest::actionString() const
{
    return MediaTailorRequestPrivate::toString(action());
}

/*!
 * Returns the MediaTailor API version implemented by this request.
 */
QString MediaTailorRequest::apiVersion() const
{
    Q_D(const MediaTailorRequest);
    return d->apiVersion;
}

/*!
 * Sets the MediaTailor action to be performed by this request to \a action.
 */
void MediaTailorRequest::setAction(const Action action)
{
    Q_D(MediaTailorRequest);
    d->action = action;
}

/*!
 * Sets the MediaTailor API version to include in this request to \a version.
 */
void MediaTailorRequest::setApiVersion(const QString &version)
{
    Q_D(MediaTailorRequest);
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
bool MediaTailorRequest::operator==(const MediaTailorRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid MediaTailor queue name.
 *
 * @par From MediaTailor FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid MediaTailor queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool MediaTailorRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int MediaTailorRequest::clearParameter(const QString &name)
{
    Q_D(MediaTailorRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void MediaTailorRequest::clearParameters()
{
    Q_D(MediaTailorRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant MediaTailorRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const MediaTailorRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &MediaTailorRequest::parameters() const
{
    Q_D(const MediaTailorRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void MediaTailorRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(MediaTailorRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void MediaTailorRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(MediaTailorRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the MediaTailor request using the given
 * \a endpoint.
 *
 * This MediaTailor implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest MediaTailorRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const MediaTailorRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::MediaTailor::MediaTailorRequestPrivate
 * \brief The MediaTailorRequestPrivate class provides private implementation for MediaTailorRequest.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a MediaTailorRequestPrivate object for MediaTailor \a action,
 * with public implementation \a q.
 */
MediaTailorRequestPrivate::MediaTailorRequestPrivate(const MediaTailorRequest::Action action, MediaTailorRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2018-04-23"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the MediaTailorRequest class's copy constructor.
 */
MediaTailorRequestPrivate::MediaTailorRequestPrivate(const MediaTailorRequestPrivate &other,
                                     MediaTailorRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts MediaTailorRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the MediaTailor service's Action
 * query parameters.
 */
QString MediaTailorRequestPrivate::toString(const MediaTailorRequest::Action &action)
{
    #define ActionToString(action) \
        case MediaTailorRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(ConfigureLogsForPlaybackConfiguration);
        ActionToString(CreateChannel);
        ActionToString(CreateLiveSource);
        ActionToString(CreatePrefetchSchedule);
        ActionToString(CreateProgram);
        ActionToString(CreateSourceLocation);
        ActionToString(CreateVodSource);
        ActionToString(DeleteChannel);
        ActionToString(DeleteChannelPolicy);
        ActionToString(DeleteLiveSource);
        ActionToString(DeletePlaybackConfiguration);
        ActionToString(DeletePrefetchSchedule);
        ActionToString(DeleteProgram);
        ActionToString(DeleteSourceLocation);
        ActionToString(DeleteVodSource);
        ActionToString(DescribeChannel);
        ActionToString(DescribeLiveSource);
        ActionToString(DescribeProgram);
        ActionToString(DescribeSourceLocation);
        ActionToString(DescribeVodSource);
        ActionToString(GetChannelPolicy);
        ActionToString(GetChannelSchedule);
        ActionToString(GetPlaybackConfiguration);
        ActionToString(GetPrefetchSchedule);
        ActionToString(ListAlerts);
        ActionToString(ListChannels);
        ActionToString(ListLiveSources);
        ActionToString(ListPlaybackConfigurations);
        ActionToString(ListPrefetchSchedules);
        ActionToString(ListSourceLocations);
        ActionToString(ListTagsForResource);
        ActionToString(ListVodSources);
        ActionToString(PutChannelPolicy);
        ActionToString(PutPlaybackConfiguration);
        ActionToString(StartChannel);
        ActionToString(StopChannel);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateChannel);
        ActionToString(UpdateLiveSource);
        ActionToString(UpdateSourceLocation);
        ActionToString(UpdateVodSource);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace MediaTailor
} // namespace QtAws
