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

#include "updatedomainassociationresponse.h"
#include "updatedomainassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::UpdateDomainAssociationResponse
 * \brief The UpdateDomainAssociationResponse class provides an interace for Amplify UpdateDomainAssociation responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::updateDomainAssociation
 */

/*!
 * Constructs a UpdateDomainAssociationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDomainAssociationResponse::UpdateDomainAssociationResponse(
        const UpdateDomainAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new UpdateDomainAssociationResponsePrivate(this), parent)
{
    setRequest(new UpdateDomainAssociationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDomainAssociationRequest * UpdateDomainAssociationResponse::request() const
{
    Q_D(const UpdateDomainAssociationResponse);
    return static_cast<const UpdateDomainAssociationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify UpdateDomainAssociation \a response.
 */
void UpdateDomainAssociationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDomainAssociationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::UpdateDomainAssociationResponsePrivate
 * \brief The UpdateDomainAssociationResponsePrivate class provides private implementation for UpdateDomainAssociationResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a UpdateDomainAssociationResponsePrivate object with public implementation \a q.
 */
UpdateDomainAssociationResponsePrivate::UpdateDomainAssociationResponsePrivate(
    UpdateDomainAssociationResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify UpdateDomainAssociation response element from \a xml.
 */
void UpdateDomainAssociationResponsePrivate::parseUpdateDomainAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDomainAssociationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
