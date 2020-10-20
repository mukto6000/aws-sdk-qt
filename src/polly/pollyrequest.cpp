/*
    Copyright 2013-2020 Paul Colby

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

#include "pollyrequest.h"
#include "pollyrequest_p.h"

namespace QtAws {
namespace Polly {

/*!
 * \class QtAws::Polly::PollyRequest
 * \brief The PollyRequest class provides an interface for Polly requests.
 *
 * \inmodule QtAwsPolly
 */

/*!
 * \enum PollyRequest::Action
 *
 * This enum describes the actions that can be performed as Polly
 * requests.
 *
 * \value DeleteLexiconAction Polly DeleteLexicon action.
 * \value DescribeVoicesAction Polly DescribeVoices action.
 * \value GetLexiconAction Polly GetLexicon action.
 * \value GetSpeechSynthesisTaskAction Polly GetSpeechSynthesisTask action.
 * \value ListLexiconsAction Polly ListLexicons action.
 * \value ListSpeechSynthesisTasksAction Polly ListSpeechSynthesisTasks action.
 * \value PutLexiconAction Polly PutLexicon action.
 * \value StartSpeechSynthesisTaskAction Polly StartSpeechSynthesisTask action.
 * \value SynthesizeSpeechAction Polly SynthesizeSpeech action.
 */

/*!
 * Constructs a PollyRequest object for Polly \a action.
 */
PollyRequest::PollyRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new PollyRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
PollyRequest::PollyRequest(const PollyRequest &other)
    : QtAws::Core::AwsAbstractRequest(new PollyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the PollyRequest object to be equal to \a other.
 */
PollyRequest& PollyRequest::operator=(const PollyRequest &other)
{
    Q_D(PollyRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa PollyRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from PollyRequestPrivate.
 */
PollyRequest::PollyRequest(PollyRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Polly action to be performed by this request.
 */
PollyRequest::Action PollyRequest::action() const
{
    Q_D(const PollyRequest);
    return d->action;
}

/*!
 * Returns the name of the Polly action to be performed by this request.
 */
QString PollyRequest::actionString() const
{
    return PollyRequestPrivate::toString(action());
}

/*!
 * Returns the Polly API version implemented by this request.
 */
QString PollyRequest::apiVersion() const
{
    Q_D(const PollyRequest);
    return d->apiVersion;
}

/*!
 * Sets the Polly action to be performed by this request to \a action.
 */
void PollyRequest::setAction(const Action action)
{
    Q_D(PollyRequest);
    d->action = action;
}

/*!
 * Sets the Polly API version to include in this request to \a version.
 */
void PollyRequest::setApiVersion(const QString &version)
{
    Q_D(PollyRequest);
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
bool PollyRequest::operator==(const PollyRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Polly queue name.
 *
 * @par From Polly FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Polly queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool PollyRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int PollyRequest::clearParameter(const QString &name)
{
    Q_D(PollyRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void PollyRequest::clearParameters()
{
    Q_D(PollyRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant PollyRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const PollyRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &PollyRequest::parameters() const
{
    Q_D(const PollyRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void PollyRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(PollyRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void PollyRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(PollyRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Polly request using the given
 * \a endpoint.
 *
 * This Polly implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest PollyRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const PollyRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Polly::PollyRequestPrivate
 * \brief The PollyRequestPrivate class provides private implementation for PollyRequest.
 * \internal
 *
 * \inmodule QtAwsPolly
 */

/*!
 * Constructs a PollyRequestPrivate object for Polly \a action,
 * with public implementation \a q.
 */
PollyRequestPrivate::PollyRequestPrivate(const PollyRequest::Action action, PollyRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the PollyRequest class's copy constructor.
 */
PollyRequestPrivate::PollyRequestPrivate(const PollyRequestPrivate &other,
                                     PollyRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts PollyRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Polly service's Action
 * query parameters.
 */
QString PollyRequestPrivate::toString(const PollyRequest::Action &action)
{
    #define ActionToString(action) \
        case PollyRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Polly
} // namespace QtAws
