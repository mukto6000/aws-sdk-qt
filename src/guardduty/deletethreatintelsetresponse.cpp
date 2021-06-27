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

#include "deletethreatintelsetresponse.h"
#include "deletethreatintelsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::DeleteThreatIntelSetResponse
 * \brief The DeleteThreatIntelSetResponse class provides an interace for GuardDuty DeleteThreatIntelSet responses.
 *
 * \inmodule QtAwsGuardDuty
 *
 *  Amazon GuardDuty is a continuous security monitoring service that analyzes and processes the following data sources: VPC
 *  Flow Logs, AWS CloudTrail event logs, and DNS logs. It uses threat intelligence feeds (such as lists of malicious IPs
 *  and domains) and machine learning to identify unexpected, potentially unauthorized, and malicious activity within your
 *  AWS environment. This can include issues like escalations of privileges, uses of exposed credentials, or communication
 *  with malicious IPs, URLs, or domains. For example, GuardDuty can detect compromised EC2 instances that serve malware or
 *  mine bitcoin.
 * 
 *  </p
 * 
 *  GuardDuty also monitors AWS account access behavior for signs of compromise. Some examples of this are unauthorized
 *  infrastructure deployments such as EC2 instances deployed in a Region that has never been used, or unusual API calls
 *  like a password policy change to reduce password strength.
 * 
 *  </p
 * 
 *  GuardDuty informs you of the status of your AWS environment by producing security findings that you can view in the
 *  GuardDuty console or through Amazon CloudWatch events. For more information, see the <i> <a
 *  href="https://docs.aws.amazon.com/guardduty/latest/ug/what-is-guardduty.html">Amazon GuardDuty User Guide</a> </i>.
 *
 * \sa GuardDutyClient::deleteThreatIntelSet
 */

/*!
 * Constructs a DeleteThreatIntelSetResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteThreatIntelSetResponse::DeleteThreatIntelSetResponse(
        const DeleteThreatIntelSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new DeleteThreatIntelSetResponsePrivate(this), parent)
{
    setRequest(new DeleteThreatIntelSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteThreatIntelSetRequest * DeleteThreatIntelSetResponse::request() const
{
    return static_cast<const DeleteThreatIntelSetRequest *>(GuardDutyResponse::request());
}

/*!
 * \reimp
 * Parses a successful GuardDuty DeleteThreatIntelSet \a response.
 */
void DeleteThreatIntelSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteThreatIntelSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::DeleteThreatIntelSetResponsePrivate
 * \brief The DeleteThreatIntelSetResponsePrivate class provides private implementation for DeleteThreatIntelSetResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a DeleteThreatIntelSetResponsePrivate object with public implementation \a q.
 */
DeleteThreatIntelSetResponsePrivate::DeleteThreatIntelSetResponsePrivate(
    DeleteThreatIntelSetResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty DeleteThreatIntelSet response element from \a xml.
 */
void DeleteThreatIntelSetResponsePrivate::parseDeleteThreatIntelSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteThreatIntelSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GuardDuty
} // namespace QtAws
