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

#include "opsworkscmrequest.h"
#include "opsworkscmrequest_p.h"

namespace QtAws {
namespace OpsWorksCM {

/*!
 * \class QtAws::OpsWorksCM::OpsWorksCMRequest
 * \brief The OpsWorksCMRequest class provides an interface for OpsWorksCM requests.
 *
 * \inmodule QtAwsOpsWorksCM
 */

/*!
 * \enum OpsWorksCMRequest::Action
 *
 * This enum describes the actions that can be performed as OpsWorksCM
 * requests.
 *
 * \value AssociateNodeAction OpsWorksCM AssociateNode action.
 * \value CreateBackupAction OpsWorksCM CreateBackup action.
 * \value CreateServerAction OpsWorksCM CreateServer action.
 * \value DeleteBackupAction OpsWorksCM DeleteBackup action.
 * \value DeleteServerAction OpsWorksCM DeleteServer action.
 * \value DescribeAccountAttributesAction OpsWorksCM DescribeAccountAttributes action.
 * \value DescribeBackupsAction OpsWorksCM DescribeBackups action.
 * \value DescribeEventsAction OpsWorksCM DescribeEvents action.
 * \value DescribeNodeAssociationStatusAction OpsWorksCM DescribeNodeAssociationStatus action.
 * \value DescribeServersAction OpsWorksCM DescribeServers action.
 * \value DisassociateNodeAction OpsWorksCM DisassociateNode action.
 * \value ExportServerEngineAttributeAction OpsWorksCM ExportServerEngineAttribute action.
 * \value RestoreServerAction OpsWorksCM RestoreServer action.
 * \value StartMaintenanceAction OpsWorksCM StartMaintenance action.
 * \value UpdateServerAction OpsWorksCM UpdateServer action.
 * \value UpdateServerEngineAttributesAction OpsWorksCM UpdateServerEngineAttributes action.
 */

/*!
 * Constructs a OpsWorksCMRequest object for OpsWorksCM \a action.
 */
OpsWorksCMRequest::OpsWorksCMRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new OpsWorksCMRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
OpsWorksCMRequest::OpsWorksCMRequest(const OpsWorksCMRequest &other)
    : QtAws::Core::AwsAbstractRequest(new OpsWorksCMRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the OpsWorksCMRequest object to be equal to \a other.
 */
OpsWorksCMRequest& OpsWorksCMRequest::operator=(const OpsWorksCMRequest &other)
{
    Q_D(OpsWorksCMRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa OpsWorksCMRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from OpsWorksCMRequestPrivate.
 */
OpsWorksCMRequest::OpsWorksCMRequest(OpsWorksCMRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the OpsWorksCM action to be performed by this request.
 */
OpsWorksCMRequest::Action OpsWorksCMRequest::action() const
{
    Q_D(const OpsWorksCMRequest);
    return d->action;
}

/*!
 * Returns the name of the OpsWorksCM action to be performed by this request.
 */
QString OpsWorksCMRequest::actionString() const
{
    return OpsWorksCMRequestPrivate::toString(action());
}

/*!
 * Returns the OpsWorksCM API version implemented by this request.
 */
QString OpsWorksCMRequest::apiVersion() const
{
    Q_D(const OpsWorksCMRequest);
    return d->apiVersion;
}

/*!
 * Sets the OpsWorksCM action to be performed by this request to \a action.
 */
void OpsWorksCMRequest::setAction(const Action action)
{
    Q_D(OpsWorksCMRequest);
    d->action = action;
}

/*!
 * Sets the OpsWorksCM API version to include in this request to \a version.
 */
void OpsWorksCMRequest::setApiVersion(const QString &version)
{
    Q_D(OpsWorksCMRequest);
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
bool OpsWorksCMRequest::operator==(const OpsWorksCMRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid OpsWorksCM queue name.
 *
 * @par From OpsWorksCM FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid OpsWorksCM queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool OpsWorksCMRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int OpsWorksCMRequest::clearParameter(const QString &name)
{
    Q_D(OpsWorksCMRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void OpsWorksCMRequest::clearParameters()
{
    Q_D(OpsWorksCMRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant OpsWorksCMRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const OpsWorksCMRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &OpsWorksCMRequest::parameters() const
{
    Q_D(const OpsWorksCMRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void OpsWorksCMRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(OpsWorksCMRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void OpsWorksCMRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(OpsWorksCMRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the OpsWorksCM request using the given
 * \a endpoint.
 *
 * This OpsWorksCM implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest OpsWorksCMRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const OpsWorksCMRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::OpsWorksCM::OpsWorksCMRequestPrivate
 * \brief The OpsWorksCMRequestPrivate class provides private implementation for OpsWorksCMRequest.
 * \internal
 *
 * \inmodule QtAwsOpsWorksCM
 */

/*!
 * Constructs a OpsWorksCMRequestPrivate object for OpsWorksCM \a action,
 * with public implementation \a q.
 */
OpsWorksCMRequestPrivate::OpsWorksCMRequestPrivate(const OpsWorksCMRequest::Action action, OpsWorksCMRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the OpsWorksCMRequest class's copy constructor.
 */
OpsWorksCMRequestPrivate::OpsWorksCMRequestPrivate(const OpsWorksCMRequestPrivate &other,
                                     OpsWorksCMRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts OpsWorksCMRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the OpsWorksCM service's Action
 * query parameters.
 */
QString OpsWorksCMRequestPrivate::toString(const OpsWorksCMRequest::Action &action)
{
    #define ActionToString(action) \
        case OpsWorksCMRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace OpsWorksCM
} // namespace QtAws
