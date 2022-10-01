// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createvpcassociationauthorizationresponse.h"
#include "createvpcassociationauthorizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::CreateVPCAssociationAuthorizationResponse
 * \brief The CreateVPCAssociationAuthorizationResponse class provides an interace for Route53 CreateVPCAssociationAuthorization responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::createVPCAssociationAuthorization
 */

/*!
 * Constructs a CreateVPCAssociationAuthorizationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateVPCAssociationAuthorizationResponse::CreateVPCAssociationAuthorizationResponse(
        const CreateVPCAssociationAuthorizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new CreateVPCAssociationAuthorizationResponsePrivate(this), parent)
{
    setRequest(new CreateVPCAssociationAuthorizationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateVPCAssociationAuthorizationRequest * CreateVPCAssociationAuthorizationResponse::request() const
{
    Q_D(const CreateVPCAssociationAuthorizationResponse);
    return static_cast<const CreateVPCAssociationAuthorizationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 CreateVPCAssociationAuthorization \a response.
 */
void CreateVPCAssociationAuthorizationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateVPCAssociationAuthorizationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::CreateVPCAssociationAuthorizationResponsePrivate
 * \brief The CreateVPCAssociationAuthorizationResponsePrivate class provides private implementation for CreateVPCAssociationAuthorizationResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a CreateVPCAssociationAuthorizationResponsePrivate object with public implementation \a q.
 */
CreateVPCAssociationAuthorizationResponsePrivate::CreateVPCAssociationAuthorizationResponsePrivate(
    CreateVPCAssociationAuthorizationResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 CreateVPCAssociationAuthorization response element from \a xml.
 */
void CreateVPCAssociationAuthorizationResponsePrivate::parseCreateVPCAssociationAuthorizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVPCAssociationAuthorizationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
