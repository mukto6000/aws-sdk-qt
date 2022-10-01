// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatefilesystemaliasesresponse.h"
#include "associatefilesystemaliasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::AssociateFileSystemAliasesResponse
 * \brief The AssociateFileSystemAliasesResponse class provides an interace for FSx AssociateFileSystemAliases responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::associateFileSystemAliases
 */

/*!
 * Constructs a AssociateFileSystemAliasesResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateFileSystemAliasesResponse::AssociateFileSystemAliasesResponse(
        const AssociateFileSystemAliasesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new AssociateFileSystemAliasesResponsePrivate(this), parent)
{
    setRequest(new AssociateFileSystemAliasesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateFileSystemAliasesRequest * AssociateFileSystemAliasesResponse::request() const
{
    Q_D(const AssociateFileSystemAliasesResponse);
    return static_cast<const AssociateFileSystemAliasesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FSx AssociateFileSystemAliases \a response.
 */
void AssociateFileSystemAliasesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateFileSystemAliasesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::AssociateFileSystemAliasesResponsePrivate
 * \brief The AssociateFileSystemAliasesResponsePrivate class provides private implementation for AssociateFileSystemAliasesResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a AssociateFileSystemAliasesResponsePrivate object with public implementation \a q.
 */
AssociateFileSystemAliasesResponsePrivate::AssociateFileSystemAliasesResponsePrivate(
    AssociateFileSystemAliasesResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx AssociateFileSystemAliases response element from \a xml.
 */
void AssociateFileSystemAliasesResponsePrivate::parseAssociateFileSystemAliasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateFileSystemAliasesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
