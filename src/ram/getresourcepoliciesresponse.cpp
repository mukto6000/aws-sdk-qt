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

#include "getresourcepoliciesresponse.h"
#include "getresourcepoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ram {

/*!
 * \class QtAws::Ram::GetResourcePoliciesResponse
 * \brief The GetResourcePoliciesResponse class provides an interace for Ram GetResourcePolicies responses.
 *
 * \inmodule QtAwsRam
 *
 *  This is the <i>Resource Access Manager API Reference</i>. This documentation provides descriptions and syntax for each
 *  of the actions and data types in RAM. RAM is a service that helps you securely share your Amazon Web Services resources
 *  across Amazon Web Services accounts. If you have multiple Amazon Web Services accounts, you can use RAM to share those
 *  resources with other accounts. If you use Organizations to manage your accounts, then you share your resources with your
 *  organization or organizational units (OUs). For supported resource types, you can also share resources with individual
 *  Identity and Access Management (IAM) roles an users.
 * 
 *  </p
 * 
 *  To learn more about RAM, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/ram">Resource Access Manager product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/ram/latest/userguide/">Resource Access Manager User Guide</a>
 *
 * \sa RamClient::getResourcePolicies
 */

/*!
 * Constructs a GetResourcePoliciesResponse object for \a reply to \a request, with parent \a parent.
 */
GetResourcePoliciesResponse::GetResourcePoliciesResponse(
        const GetResourcePoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RamResponse(new GetResourcePoliciesResponsePrivate(this), parent)
{
    setRequest(new GetResourcePoliciesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetResourcePoliciesRequest * GetResourcePoliciesResponse::request() const
{
    Q_D(const GetResourcePoliciesResponse);
    return static_cast<const GetResourcePoliciesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ram GetResourcePolicies \a response.
 */
void GetResourcePoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetResourcePoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ram::GetResourcePoliciesResponsePrivate
 * \brief The GetResourcePoliciesResponsePrivate class provides private implementation for GetResourcePoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsRam
 */

/*!
 * Constructs a GetResourcePoliciesResponsePrivate object with public implementation \a q.
 */
GetResourcePoliciesResponsePrivate::GetResourcePoliciesResponsePrivate(
    GetResourcePoliciesResponse * const q) : RamResponsePrivate(q)
{

}

/*!
 * Parses a Ram GetResourcePolicies response element from \a xml.
 */
void GetResourcePoliciesResponsePrivate::parseGetResourcePoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResourcePoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ram
} // namespace QtAws
