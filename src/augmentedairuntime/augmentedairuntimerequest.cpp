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

#include "augmentedairuntimerequest.h"
#include "augmentedairuntimerequest_p.h"

namespace QtAws {
namespace AugmentedAIRuntime {

/*!
 * \class QtAws::AugmentedAIRuntime::AugmentedAIRuntimeRequest
 * \brief The AugmentedAIRuntimeRequest class provides an interface for AugmentedAIRuntime requests.
 *
 * \inmodule QtAwsAugmentedAIRuntime
 */

/*!
 * \enum AugmentedAIRuntimeRequest::Action
 *
 * This enum describes the actions that can be performed as AugmentedAIRuntime
 * requests.
 *
 * \value DeleteHumanLoopAction AugmentedAIRuntime DeleteHumanLoop action.
 * \value DescribeHumanLoopAction AugmentedAIRuntime DescribeHumanLoop action.
 * \value ListHumanLoopsAction AugmentedAIRuntime ListHumanLoops action.
 * \value StartHumanLoopAction AugmentedAIRuntime StartHumanLoop action.
 * \value StopHumanLoopAction AugmentedAIRuntime StopHumanLoop action.
 */

/*!
 * Constructs a AugmentedAIRuntimeRequest object for AugmentedAIRuntime \a action.
 */
AugmentedAIRuntimeRequest::AugmentedAIRuntimeRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new AugmentedAIRuntimeRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
AugmentedAIRuntimeRequest::AugmentedAIRuntimeRequest(const AugmentedAIRuntimeRequest &other)
    : QtAws::Core::AwsAbstractRequest(new AugmentedAIRuntimeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the AugmentedAIRuntimeRequest object to be equal to \a other.
 */
AugmentedAIRuntimeRequest& AugmentedAIRuntimeRequest::operator=(const AugmentedAIRuntimeRequest &other)
{
    Q_D(AugmentedAIRuntimeRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa AugmentedAIRuntimeRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AugmentedAIRuntimeRequestPrivate.
 */
AugmentedAIRuntimeRequest::AugmentedAIRuntimeRequest(AugmentedAIRuntimeRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the AugmentedAIRuntime action to be performed by this request.
 */
AugmentedAIRuntimeRequest::Action AugmentedAIRuntimeRequest::action() const
{
    Q_D(const AugmentedAIRuntimeRequest);
    return d->action;
}

/*!
 * Returns the name of the AugmentedAIRuntime action to be performed by this request.
 */
QString AugmentedAIRuntimeRequest::actionString() const
{
    return AugmentedAIRuntimeRequestPrivate::toString(action());
}

/*!
 * Returns the AugmentedAIRuntime API version implemented by this request.
 */
QString AugmentedAIRuntimeRequest::apiVersion() const
{
    Q_D(const AugmentedAIRuntimeRequest);
    return d->apiVersion;
}

/*!
 * Sets the AugmentedAIRuntime action to be performed by this request to \a action.
 */
void AugmentedAIRuntimeRequest::setAction(const Action action)
{
    Q_D(AugmentedAIRuntimeRequest);
    d->action = action;
}

/*!
 * Sets the AugmentedAIRuntime API version to include in this request to \a version.
 */
void AugmentedAIRuntimeRequest::setApiVersion(const QString &version)
{
    Q_D(AugmentedAIRuntimeRequest);
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
bool AugmentedAIRuntimeRequest::operator==(const AugmentedAIRuntimeRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid AugmentedAIRuntime queue name.
 *
 * @par From AugmentedAIRuntime FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid AugmentedAIRuntime queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool AugmentedAIRuntimeRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int AugmentedAIRuntimeRequest::clearParameter(const QString &name)
{
    Q_D(AugmentedAIRuntimeRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void AugmentedAIRuntimeRequest::clearParameters()
{
    Q_D(AugmentedAIRuntimeRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant AugmentedAIRuntimeRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const AugmentedAIRuntimeRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &AugmentedAIRuntimeRequest::parameters() const
{
    Q_D(const AugmentedAIRuntimeRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void AugmentedAIRuntimeRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(AugmentedAIRuntimeRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void AugmentedAIRuntimeRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(AugmentedAIRuntimeRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the AugmentedAIRuntime request using the given
 * \a endpoint.
 *
 * This AugmentedAIRuntime implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest AugmentedAIRuntimeRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const AugmentedAIRuntimeRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::AugmentedAIRuntime::AugmentedAIRuntimeRequestPrivate
 * \brief The AugmentedAIRuntimeRequestPrivate class provides private implementation for AugmentedAIRuntimeRequest.
 * \internal
 *
 * \inmodule QtAwsAugmentedAIRuntime
 */

/*!
 * Constructs a AugmentedAIRuntimeRequestPrivate object for AugmentedAIRuntime \a action,
 * with public implementation \a q.
 */
AugmentedAIRuntimeRequestPrivate::AugmentedAIRuntimeRequestPrivate(const AugmentedAIRuntimeRequest::Action action, AugmentedAIRuntimeRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AugmentedAIRuntimeRequest class's copy constructor.
 */
AugmentedAIRuntimeRequestPrivate::AugmentedAIRuntimeRequestPrivate(const AugmentedAIRuntimeRequestPrivate &other,
                                     AugmentedAIRuntimeRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts AugmentedAIRuntimeRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the AugmentedAIRuntime service's Action
 * query parameters.
 */
QString AugmentedAIRuntimeRequestPrivate::toString(const AugmentedAIRuntimeRequest::Action &action)
{
    #define ActionToString(action) \
        case AugmentedAIRuntimeRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(DeleteHumanLoop);
        ActionToString(DescribeHumanLoop);
        ActionToString(ListHumanLoops);
        ActionToString(StartHumanLoop);
        ActionToString(StopHumanLoop);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace AugmentedAIRuntime
} // namespace QtAws
