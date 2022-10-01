// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatedrtroleresponse.h"
#include "associatedrtroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::AssociateDRTRoleResponse
 * \brief The AssociateDRTRoleResponse class provides an interace for Shield AssociateDRTRole responses.
 *
 * \inmodule QtAwsShield
 *
 *  <fullname>Shield Advanced</fullname>
 * 
 *  This is the <i>Shield Advanced API Reference</i>. This guide is for developers who need detailed information about the
 *  Shield Advanced API actions, data types, and errors. For detailed information about WAF and Shield Advanced features and
 *  an overview of how to use the WAF and Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">WAF and Shield Developer
 *
 * \sa ShieldClient::associateDRTRole
 */

/*!
 * Constructs a AssociateDRTRoleResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateDRTRoleResponse::AssociateDRTRoleResponse(
        const AssociateDRTRoleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new AssociateDRTRoleResponsePrivate(this), parent)
{
    setRequest(new AssociateDRTRoleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateDRTRoleRequest * AssociateDRTRoleResponse::request() const
{
    Q_D(const AssociateDRTRoleResponse);
    return static_cast<const AssociateDRTRoleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Shield AssociateDRTRole \a response.
 */
void AssociateDRTRoleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateDRTRoleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::AssociateDRTRoleResponsePrivate
 * \brief The AssociateDRTRoleResponsePrivate class provides private implementation for AssociateDRTRoleResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a AssociateDRTRoleResponsePrivate object with public implementation \a q.
 */
AssociateDRTRoleResponsePrivate::AssociateDRTRoleResponsePrivate(
    AssociateDRTRoleResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield AssociateDRTRole response element from \a xml.
 */
void AssociateDRTRoleResponsePrivate::parseAssociateDRTRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateDRTRoleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws
