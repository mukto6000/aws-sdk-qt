// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putpolicyresponse.h"
#include "putpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::PutPolicyResponse
 * \brief The PutPolicyResponse class provides an interace for Fms PutPolicy responses.
 *
 * \inmodule QtAwsFms
 *
 *  This is the <i>Firewall Manager API Reference</i>. This guide is for developers who need detailed information about the
 *  Firewall Manager API actions, data types, and errors. For detailed information about Firewall Manager features, see the
 *  <a href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">Firewall Manager Developer
 * 
 *  Guide</a>>
 * 
 *  Some API actions require explicit resource permissions. For information, see the developer guide topic <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-api-permissions-ref.html">Firewall Manager required
 *  permissions for API actions</a>.
 *
 * \sa FmsClient::putPolicy
 */

/*!
 * Constructs a PutPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutPolicyResponse::PutPolicyResponse(
        const PutPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FmsResponse(new PutPolicyResponsePrivate(this), parent)
{
    setRequest(new PutPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutPolicyRequest * PutPolicyResponse::request() const
{
    Q_D(const PutPolicyResponse);
    return static_cast<const PutPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Fms PutPolicy \a response.
 */
void PutPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fms::PutPolicyResponsePrivate
 * \brief The PutPolicyResponsePrivate class provides private implementation for PutPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a PutPolicyResponsePrivate object with public implementation \a q.
 */
PutPolicyResponsePrivate::PutPolicyResponsePrivate(
    PutPolicyResponse * const q) : FmsResponsePrivate(q)
{

}

/*!
 * Parses a Fms PutPolicy response element from \a xml.
 */
void PutPolicyResponsePrivate::parsePutPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fms
} // namespace QtAws
